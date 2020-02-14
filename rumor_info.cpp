#include "rumor_info.h"
#include "ui_rumor_info.h"
#include <QMessageBox>

rumor_info::rumor_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rumor_info)
{
    ui->setupUi(this);
    manager = new QNetworkAccessManager(this);          //新建网络请求对象
    this->setWindowTitle("较真查证");
}

rumor_info::~rumor_info()
{
    delete ui;
}

void rumor_info::httpReadyRead()   //有可用数据
{
    if(file)
        file->write(reply->readAll());  //如果文件存在，则写入文件
}
void rumor_info::httpFinished()  //完成下载
{
    file->flush();
    file->close();
//    qDebug() << "rumor数据下载成功";
    reply->deleteLater();
    reply = 0;
    delete file;
    file = 0;
//    QMessageBox::information(this, "提示", "下载完成");
    paraseRumorInfo(filename);

}

void rumor_info::paraseRumorInfo(QString filename)
{
//    qDebug() << "开始解析rumorInfo数据:" << filename;
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "rumorInfo文件打开失败";
    }
    QByteArray allData = file.readAll();
    file.close();
    file.remove();            //删除文件

    QJsonParseError err_rpt;
    QJsonDocument root_Doc = QJsonDocument::fromJson(allData, &err_rpt);

    if(err_rpt.error != QJsonParseError::NoError)
    {
//        file.remove();
        qDebug() << "JSON格式错误";
//        return -1;
    }
//    qDebug() << "JSON格式正确";
    if(root_Doc.isObject())
    {
        QJsonObject root_obj = root_Doc.object();
//        QString code = root_obj.value("code").toString();  //0
        QJsonObject content_obj = root_obj.value("content").toObject();
        disRumorInfo(content_obj);
    }
}

void rumor_info::disRumorInfo(QJsonObject content_obj)
{
    ui->tb_rumor_info->clear();

    QFile file(rumorInfoHtmlFileName);
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "rumor文件打开失败";
    }
    QByteArray allData = file.readAll();
    QList<QByteArray> ba;
    file.close();

    ba = allData.split('*');
//    qDebug() << ba.size();

    QString bgmClr;
    QString html;

    QString title = content_obj.value("title").toString();
    html.append(ba[0]);
    html.append(title);

    QString rumor = content_obj.value("rumor").toString();          //说法
    html.append(ba[1]);
    html.append(rumor);

    QString result = content_obj.value("result").toString();        //疑
    if(result == "假")        //假
        bgmClr = bgmClr_fake;
    else if(result == "真")   //真
        bgmClr = bgmClr_true;
    else                     //疑
        bgmClr = bgmClr_doubt;

    html.append(ba[2]);
    html.append(bgmClr);

    html.append(ba[3]);
    html.append(result);

    QString explain = content_obj.value("explain").toString();      //有失实
    html.append(ba[4]);
    html.append(explain);

    QJsonArray abstract_arr = content_obj.value("abstract").toArray();
    uint8_t arrSize = abstract_arr.size();
    for(int i = 0; i < arrSize; i++)
    {
        QString index = QString::number(abstract_arr.at(i).toObject().value("index").toInt());
        QString content = abstract_arr.at(i).toObject().value("content").toString();
        html.append(ba[6]);
        html.append(index);
        html.append(ba[7]);
        html.append(content);
        html.append(ba[8]);
    }

    QJsonObject Author = content_obj.value("Author").toObject();
    QString name = Author.value("name").toString();     //谢望时
    QString desc = Author.value("desc").toString();
    html.append(ba[9]);
    html.append(name);
    html.append(ba[10]);
    html.append(desc);

//    QString markstyle = content_obj.value("doubt").toString();

    QString date = content_obj.value("date").toString();    //2020-02-13
    html.append(ba[11]);
    html.append(date);
    QString source = content_obj.value("source").toString();
    html.append(ba[12]);
    html.append(source);
    html.append(ba[13]);

//    QString head = "[" + result + "]" + explain;

    ui->tb_rumor_info->setHtml(html);
    qDebug() << "辟谣详细信息解析成功";
}

void rumor_info::getRumorInfo(QString rumor_id)
{
    QNetworkConfigurationManager mgr;
    if(mgr.isOnline() == true)
    {
        qint64 timestamp = QDateTime::currentDateTime().toMSecsSinceEpoch(); //毫秒级
        QString timestamp_str;
        timestamp_str.setNum(timestamp, 10);        //十进制时间戳15555550001
        QString current_time =  QDateTime::currentDateTime().toString("yyyyMMdd_hh_mm_ss_zzz");

        url = QUrl(rumor_infoApi + rumor_id);
        qDebug() << "网络正常,开始获取辟谣详细信息" + url.toString();
//        qDebug() << url.toString();

        filename = "rumorInfo_" + current_time + ".json";
        file = new QFile(filename);

        if(!file->open(QIODevice::WriteOnly))
        {
            qDebug() << "rumorInfo文件打开失败";
            delete file;
            file = 0;
            return;
        }

//        qDebug() << "rumorInfoApi网络正常";
        reply = manager->get(QNetworkRequest(url));     //发送get请求数据
        //下载完成执行槽函数
        connect(reply,SIGNAL(readyRead()),this,SLOT(httpReadyRead()));
        //有可用的数据
        connect(reply,SIGNAL(finished()),this,SLOT(httpFinished()));
    }
    else
    {
        qDebug() << "rumorInfoApi网络错误，请检查网络";
        QMessageBox::warning(NULL, "错误", "无网络连接，请检查网络", QMessageBox::Yes);
    }
}


void rumor_info::on_btn_back_clicked()
{
    this->close();
}
