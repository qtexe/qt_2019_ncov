#include "rumor.h"
#include "ui_rumor.h"
//#include "windows.h"
#include <QMessageBox>

rumor::rumor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rumor)
{
    ui->setupUi(this);

    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setWindowTitle("辟谣信息");
    ui->tb_rumor->setOpenLinks(false);
//    ui->tb_rumor->setOpenLinks(true);
    connect(ui->tb_rumor, SIGNAL(anchorClicked(const QUrl&)), this, SLOT(anchorClickedSlot(const QUrl&)));
    manager = new QNetworkAccessManager(this);          //新建网络请求对象
}

rumor::~rumor()
{
    delete ui;
}

void rumor::anchorClickedSlot(const QUrl& url)
{
//    qDebug() << url;
    QString url_str = url.toString();

    if(url_str == "https://vp.fact.qq.com/home")
    {
        QDesktopServices::openUrl(url);
    }
    else
    {
        QNetworkConfigurationManager mgr;
        if(mgr.isOnline() == true)
        {
            QList<QString> list = url_str.split('=');
            info.getRumorInfo(list[1]);
            info.exec();
        }
        else
            QMessageBox::warning(NULL, "错误", "无网络连接，请检查网络", QMessageBox::Yes);
    }
}
void rumor::httpReadyRead()   //有可用数据
{
    if(file)
        file->write(reply->readAll());  //如果文件存在，则写入文件
}
void rumor::httpFinished()  //完成下载
{
    file->flush();
    file->close();
//    qDebug() << "rumor数据下载成功";
    reply->deleteLater();
    reply = 0;
    delete file;
    file = 0;
//    QMessageBox::information(this, "提示", "下载完成");
    parseRumor(filename);
}

void rumor::parseRumor(QString filename)
{
//    qDebug() << "开始解析rumor数据:" << filename;
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "rumor文件打开失败";
    }
    QByteArray allData = file.readAll();
    file.close();
    file.remove();            //删除文件

    QJsonParseError err_rpt;
    QJsonDocument root_Doc = QJsonDocument::fromJson(allData, &err_rpt);

    if(err_rpt.error != QJsonParseError::NoError)
    {
        file.remove();
        qDebug() << "JSON格式错误";
//        return -1;
    }
//    qDebug() << "JSON格式正确";
    if(root_Doc.isObject())
    {
        QJsonObject root_obj = root_Doc.object();
//        QString code = root_obj.value("code").toString();  //0
        QJsonArray content_arr = root_obj.value("content").toArray();
        disRumorNews(content_arr);
    }
}

void rumor::getRumorNews(uint8_t page)      //获取几页
{
//    uint8_t page = 0;

//    ui->tb_rumor->clear();
//    html.clear();

//    for(int i = 0; i < num; i++)
//    {
    QNetworkConfigurationManager mgr;
    if(mgr.isOnline() == true)
    {
        qint64 timestamp = QDateTime::currentDateTime().toMSecsSinceEpoch(); //毫秒级
        QString timestamp_str;
        timestamp_str.setNum(timestamp, 10);        //十进制时间戳15555550001
        QString current_time =  QDateTime::currentDateTime().toString("yyyyMMdd_hh_mm_ss_zzz");
        QString pageStr = QString::number(page);
        url = QUrl(rumorApi + pageStr);
//        qDebug() << url.toString();
        qDebug() << "网络正常,开始更新辟谣信息" + url.toString();

        filename = "rumorNews_" + pageStr + "_" + current_time + ".json";
        file = new QFile(filename);

        if(!file->open(QIODevice::WriteOnly))
        {
            qDebug() << "rumor文件打开失败";
            delete file;
            file = 0;
            return;
        }

//        qDebug() << "rumorApi网络正常";
        reply = manager->get(QNetworkRequest(url));     //发送get请求数据
        //下载完成执行槽函数
        connect(reply,SIGNAL(finished()),this,SLOT(httpFinished()));
        //有可用的数据
        connect(reply,SIGNAL(readyRead()),this,SLOT(httpReadyRead()));
    }
    else
    {
        qDebug() << "rumorApi网络错误，请检查网络";
        QMessageBox::warning(NULL, "错误", "无网络连接，请检查网络", QMessageBox::Yes);
    }
}

//假,谣言,url,"谣言标题", 腾讯医典, id

void rumor::disRumorNews(QJsonArray content_arr)
{
    QString tmp = QCoreApplication::applicationDirPath() + "/" + rumorHtmlFileName;

    QFile file(tmp);

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "rumor文件打开失败";
    }
    QByteArray allData = file.readAll();
    QList<QByteArray> ba;

    file.close();
    ba = allData.split('*');

//    qDebug() << ba.size();

    QString html;
    uint8_t arrSize = content_arr.size();
    for(int i = 0; i < arrSize; i++)
    {
        QJsonObject rumor_obj = content_arr.at(i).toObject();
        QString date = rumor_obj.value("date").toString();             //"2020-02-12"
        QString result = rumor_obj.value("result").toString();         //"假"
//        QString markstyle = rumor_obj.value("markstyle").toString();   //"fake"
        QString explain = rumor_obj.value("explain").toString();       //"谣言"
        QString title = rumor_obj.value("title").toString();           //"拔头两侧的白发可以防治新型冠状病毒肺炎"
        QString author = rumor_obj.value("author").toString();         //"腾讯旗下专业医学科普平台"
        QString id = rumor_obj.value("id").toString();                 //"fdfb9439ecf2a5113791a46252764ece"
        QString bgmClr;
        if(result == "假")        //假
            bgmClr = bgmClr_fake;
        else if(result == "真")   //真
            bgmClr = bgmClr_true;
        else                      //疑
            bgmClr = bgmClr_doubt;
//        QString url = rumorUrl + id;
        QString head = "[" + result + "]" + explain;
        QString from = date + " " + author;
        QString str = ba[0] + bgmClr + ba[1] + head+ ba[2] + id + ba[3] + title + ba[4] + from + ba[5];
        html.append(str);

//        qDebug() << date << result << markstyle << explain << title;
    }
    html.append(ba[6]);
//    qDebug() << html;
    ui->tb_rumor->clear();
    ui->tb_rumor->setHtml(html);
    qDebug() << "辟谣信息更新成功";
}
