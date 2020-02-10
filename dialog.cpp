#include "dialog.h"
#include "ui_dialog.h"
#include <windows.h>

#include <QMessageBox>
#include <QDebug>

#include <QTextStream>
#include <QFile>
#include <QDate>
#include <QTimer>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkConfigurationManager>
#include <QtNetwork/QNetworkInterface>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include "qjsonvalue.h"

#include <QTreeWidgetItem>
#include <QTextStream>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    this->setWindowTitle("2019_nCoV冠状病毒感染疫情实时监控_v1.0");
    manager = new QNetworkAccessManager(this);          //新建网络请求对象
    emit on_btn_update_clicked();

    widgetInit(ui->widget_1, QColor(0, 93, 255), QColor(237, 160, 70));  //新增确诊/疑似
    widgetInit(ui->widget_2, QColor(245, 60, 60), QColor(36, 200, 200));   //累计确诊/疑似
    widgetInit(ui->widget_3, QColor(33, 144, 5), QColor(135, 135, 139)); //累计治愈/死亡
    QTimer *timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000); //ms = 1s
//    treeAddData();

    ui->tb_news->setOpenLinks(false);
    connect(ui->tb_news, SIGNAL(anchorClicked(const QUrl&)),this, SLOT(anchorClickedSlot(const QUrl&)));
    /* 新闻显示 */
    QString news;
    QString newsDate = "1581236332000";
    QString newsTitle = "山东出现首例死亡病例";
    QString newsSummary = "据山东省卫健委网站9日消息，2月8日12至24时，山东省报告新型冠状病毒感染的肺炎死亡病例1例，这也是山东省首例。据悉，患者李某某，女，85岁，既往有糖尿病、高血压、冠心病、心功能衰竭、子宫肌瘤等病史。";
    QString newsInfoSource = "人民日报";
    QString newsSourceUrl = "http:\/\/m.weibo.cn\/2803301701\/4470091523664901";

    newsSourceUrl.replace("\/", "/");

    QString newsLink = "<a href=" + newsSourceUrl + ">" + newsInfoSource + "</a>";

    news = "更新于:" + newsDate
            + "\n标题:" + newsTitle
            + "\n内容:" + newsSummary + "\n来源:";
//            + "\n来源:" + newsInfoSource;
//            + "\n地址:" + newsSourceUrl;

    ui->tb_news->setText(news);
    ui->tb_news->append(newsLink);

//    QHostAddress ipAddr = getIp();
//    qDebug() << ipAddr.toString();

}

void Dialog::anchorClickedSlot(const QUrl& url)
{
    ShellExecuteA(NULL, "open", url.toString().toStdString().c_str(), "", "", SW_SHOW);
}

void Dialog::update()
{
    static uint16_t cnt = 0;
    cnt++;
    if(cnt == 60)   //60s = 1min
    {
        qDebug() << "开始更新";
        emit on_btn_update_clicked();//触发更新
        cnt = 0;
    }
}

Dialog::~Dialog()
{
    delete ui;
}
//鼠标悬停，显示曲线值
void Dialog::disTip(QMouseEvent *event, QCustomPlot *widget, QVector<QString> date)
{
    //获取鼠标坐标，相对父窗体坐标
    float x_pos = event->pos().x();
//    int y_pos = event->pos().y();
    //鼠标坐标转化为CustomPlot内部坐标
    uint16_t x_val = widget->xAxis->pixelToCoord(x_pos) + 0.5;
//    int y_val = ui->widget_1->yAxis->pixelToCoord(y_pos);
    QString str, strToolTip;
//    int a = x_val + 0.5;
//    qDebug() << x_val << a;
    if(x_val < date.size())
    {
//        qDebug() << x_val;
        str = date[x_val];
//        str = QString::number(x_val, 10, 3);
        strToolTip += "日期: ";
        strToolTip += str;
        strToolTip += "\n";

        uint8_t lineNum = widget->xAxis->graphs().count();    //当前窗口的曲线个数

        for (int i = 0; i < lineNum; i++)
        {
            QString lineName = widget->graph(i)->name();
            //获得x轴坐标位置对应的曲线上y的值
            int y = widget->graph(i)->data()->at(x_val)->value;
            str = QString::number(y);
            strToolTip += lineName + "：";
            strToolTip += str;
            if(i != lineNum - 1)
                strToolTip += "\n";
        }
        QToolTip::showText(cursor().pos(), strToolTip, widget);
    }
}

void Dialog::widget_1_event(QMouseEvent *event)
{
    disTip(event, ui->widget_1, AddDate);
}

void Dialog::widget_2_event(QMouseEvent *event)
{
    disTip(event, ui->widget_2, TotalDate);
}

void Dialog::widget_3_event(QMouseEvent *event)
{
    disTip(event, ui->widget_3, TotalDate);
}

void Dialog::httpReadyRead()   //有可用数据
{
/*
    QTextStream streamFileOut(file);
    streamFileOut.setCodec("GBK");
    streamFileOut << reply->readAll();
    streamFileOut.flush();
    streamFileOut.setGenerateByteOrderMark(false);
*/
    if(file)
        file->write(reply->readAll());  //如果文件存在，则写入文件
}

int Dialog::readFromFile(QString filename)
{
    disInfo("开始解析数据");
//    qDebug() << filename;
    QFile file(filename);
//    QFile file("20200205_12_29_53_290.json");   //string
//    QFile file("20200207_13_01_38_931.json");   //double
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "文件打开失败";
        return -1;
    }
    QByteArray allData = file.readAll();
    file.close();
    dataParse(allData);
//    file.remove();            //删除文件
    return 0;
}

//JSON数据解析
int Dialog::dataParse(QByteArray str)
{
    QJsonParseError err_rpt;
    QJsonDocument root_Doc = QJsonDocument::fromJson(str, &err_rpt);

    if(err_rpt.error != QJsonParseError::NoError)
    {
        disInfo("JSON格式错误");
        qDebug() << "JSON格式错误";
        return -1;
    }
    disInfo("JSON格式正确");
//    qDebug() << "JSON格式正确";
    if(root_Doc.isObject())
    {
        QJsonObject root_obj = root_Doc.object();   //创建JSON对象，不是字符串
        if(root_obj.contains("data"))
        {
//            qDebug() << root_obj.value("ret").toString();
            //腾讯api的data是一个字符串
            QString data_str = root_obj.value("data").toString();
            QJsonObject data_obj = QJsonDocument::fromJson(data_str.toUtf8(),&err_rpt).object();

            //网易api的data是一个对象
//            QJsonObject data_obj = root_obj.value("data").toObject();

            QJsonObject chinaTotal = data_obj.value("chinaTotal").toObject();
            QJsonObject chinaAdd = data_obj.value("chinaAdd").toObject();
            getTotalAddData(chinaTotal, chinaAdd);  //全国累计和新增数据显示

            QString lastUpdateTime = data_obj.value("lastUpdateTime").toString();
            ui->lbe_update_time->setText(lastUpdateTime);

            QJsonArray areaTree_obj = data_obj.value("areaTree").toArray();
            QJsonObject chinaTree_obj = areaTree_obj.at(0).toObject();     //第0个是中国
            chinaTreeParse(chinaTree_obj);

            countryTreeParse(areaTree_obj);

            QJsonArray chinaDayListObj = data_obj.value("chinaDayList").toArray();
            chinaDayListParse(chinaDayListObj);

            QJsonArray chinaDayAddListObj = data_obj.value("chinaDayAddList").toArray();
            chinaDayAddListParse(chinaDayAddListObj);
            drawLine();

            //新闻解析
            QJsonArray articleArr = data_obj.value("articleList").toArray();
            articleParse(articleArr);

            disInfo("更新成功");

            connect(ui->widget_1, SIGNAL(mouseMove(QMouseEvent*)), this, SLOT(widget_1_event(QMouseEvent*)));
            connect(ui->widget_2, SIGNAL(mouseMove(QMouseEvent*)), this, SLOT(widget_2_event(QMouseEvent*)));
            connect(ui->widget_3, SIGNAL(mouseMove(QMouseEvent*)), this, SLOT(widget_3_event(QMouseEvent*)));
        }
    }
    qDebug() << "更新成功";
    return 0;
}

//累计确诊/疑似/死亡/治愈
void Dialog::chinaDayListParse(QJsonArray chinaDayListObj)
{
    //累计数量从1.13开始统计
//    size = getDay("20200113");

    uint16_t arraySize = chinaDayListObj.size();
//    qDebug() << arraySize;
    //size设置必须放在clear之前，可省略
//    TotalDate.resize(arraySize);
//    TotalConfirm.resize(arraySize);
//    TotalSuspect.resize(arraySize);
//    TotalDead.resize(arraySize);
//    TotalHeal.resize(arraySize);
//    TotalConfirmDub.resize(arraySize);
//    TotalSuspectDub.resize(arraySize);
//    TotalDeadDub.resize(arraySize);
//    TotalDeadDub.resize(arraySize);

    TotalDate.clear();

    TotalConfirm.clear();
    TotalSuspect.clear();
    TotalDead.clear();
    TotalHeal.clear();

    TotalConfirmDub.clear();
    TotalSuspectDub.clear();
    TotalDeadDub.clear();
    TotalHealDub.clear();

    chinaDayListHealRate.clear();       //累计治愈率，从1.20开始
    chinaDayListDeadRate.clear();       //累计死亡率，从1.20开始

    for(int i = 0; i < arraySize; i++)
    {
        QJsonObject chinaDay = chinaDayListObj.at(i).toObject();

        QString date = chinaDay.value("date").toString();
        double deadRate = chinaDay.value("deadRate").toString().toDouble();
        double healRate = chinaDay.value("healRate").toString().toDouble();

        TotalDate << date;

        chinaDayListDeadRate << deadRate;
        chinaDayListHealRate << healRate;
        if(i >= 7)  //从1.20开始输出
            qDebug() << deadRate << healRate;

        dataType = getValueType(chinaDay, "confirm");       //获取数据类型，2020年2月7日改为int格式了

        if(dataType == String)   //String
        {
            QString confirm = chinaDay.value("confirm").toString();
            QString suspect = chinaDay.value("suspect").toString();
            QString dead = chinaDay.value("dead").toString();
            QString heal = chinaDay.value("heal").toString();

            TotalConfirm << confirm;
            TotalSuspect << suspect;
            TotalDead << dead;
            TotalHeal << heal;
        }
        else if(dataType == Double)  //Double
        {
            double confirm = chinaDay.value("confirm").toDouble();
            double suspect = chinaDay.value("suspect").toDouble();
            double dead = chinaDay.value("dead").toDouble();
            double heal = chinaDay.value("heal").toDouble();

            TotalConfirmDub << confirm;
            TotalSuspectDub << suspect;
            TotalDeadDub << dead;
            TotalHealDub << heal;
        }

//        qDebug() << getValueType(chinaDay, "date");         //3:String
//        qDebug() << getValueType(chinaDay, "suspect");      //2:Double
    }
}

//新增确诊/疑似/死亡/治愈
void Dialog::chinaDayAddListParse(QJsonArray chinaDayAddListObj)
{
    uint16_t arraySize = chinaDayAddListObj.size();
//    qDebug() << arraySize;
    //size设置必须放在clear之前，可省略
//    AddDate.resize(arraySize);
//    AddConfirm.resize(arraySize);
//    AddSuspect.resize(arraySize);
//    AddDead.resize(arraySize);
//    AddHeal.resize(arraySize);

//    AddConfirmDub.resize(arraySize);
//    AddSuspectDub.resize(arraySize);
//    AddDeadDub.resize(arraySize);
//    AddDeadDub.resize(arraySize);

    AddDate.clear();

    AddConfirm.clear();
    AddSuspect.clear();
    AddDead.clear();
    AddHeal.clear();

    AddConfirmDub.clear();
    AddSuspectDub.clear();
    AddDeadDub.clear();
    AddHealDub.clear();

    for(int i = 0; i < arraySize; i++)
    {
        QJsonObject chinaDay = chinaDayAddListObj.at(i).toObject();
        QString date = chinaDay.value("date").toString();
        AddDate << date;
        if(dataType == String)   //String
        {
            QString confirm = chinaDay.value("confirm").toString();
            QString suspect = chinaDay.value("suspect").toString();
            QString dead = chinaDay.value("dead").toString();
            QString heal = chinaDay.value("heal").toString();

            AddConfirm << confirm;
            AddSuspect << suspect;
            AddDead << dead;
            AddHeal << heal;
            if(i == arraySize - 1)
                ui->lbe_add_suspect->setText("+" + AddSuspect[arraySize-1]);
        }
        else if(dataType == Double)  //Double
        {
            double confirm = chinaDay.value("confirm").toDouble();
            double suspect = chinaDay.value("suspect").toDouble();
            double dead = chinaDay.value("dead").toDouble();
            double heal = chinaDay.value("heal").toDouble();

            AddConfirmDub << confirm;
            AddSuspectDub << suspect;
            AddDeadDub << dead;
            AddHealDub << heal;
            if(i == arraySize - 1)
                ui->lbe_add_suspect->setText("+" + QString::number(AddSuspectDub[arraySize-1]));
        }
        //新增疑似使用最新数据
//        qDebug() << getValueType(chinaDayAdd, "date");         //3:String
//        qDebug() << getValueType(chinaDayAdd, "suspect");      //2:Double
    }
}
void Dialog::httpFinished()  //完成下载
{
    file->flush();
    file->close();
    disInfo("数据下载成功");
    reply->deleteLater();
    reply = 0;
    delete file;
    file = 0;
//    QMessageBox::information(this, "提示", "下载完成");
    readFromFile(filename);
}

void Dialog::on_btn_update_clicked()
{
    qint64 timestamp = QDateTime::currentDateTime().toMSecsSinceEpoch(); //毫秒级
    QString current_time =  QDateTime::currentDateTime().toString("yyyyMMdd_hh_mm_ss_zzz");

    QString timestamp_str;
    timestamp_str.setNum(timestamp, 10);
    disInfo("开始更新");
    //包括累计和各省市具体数据
//    url = QUrl(dataApi + timestamp_str);
    url = QUrl("https://view.inews.qq.com/g2/getOnsInfo?name=disease_h5");
    //只包含全国累计数据
//    url = QUrl("https://ncov-api.werty.cn:2021/latest/tx/");
    qDebug() << url.toString();
    filename = current_time + ".json";
    file = new QFile(filename);

    if(!file->open(QIODevice::WriteOnly))
    {
//        qDebug() << "文件打开失败";
        delete file;
        file = 0;
        return;
    }
    if(isNetWorkOnline() == true)
    {
        disInfo("网络正常");
//        qDebug() << "网络正常";
        reply = manager->get(QNetworkRequest(url));     //发送get请求数据
        //下载完成执行槽函数
        connect(reply,SIGNAL(finished()),this,SLOT(httpFinished()));
        //有可用的数据
        connect(reply,SIGNAL(readyRead()),this,SLOT(httpReadyRead()));
    }
    else
    {
        disInfo("网络错误");
        qDebug() << "网络错误，请检查网络";
        QMessageBox::warning(NULL, "错误", "无网络连接，请检查网络", QMessageBox::Yes);
    }
}
bool Dialog::isNetWorkOnline()
{
    QNetworkConfigurationManager mgr;
    return mgr.isOnline();
}
//获取人数
int Dialog::getNum(QJsonObject obj, uint16_t *num_confirm, uint16_t *num_suspect, uint16_t *num_dead, uint16_t *num_heal)
{
    uint16_t valueType = obj.value("confirm").type();

    if(!obj.isEmpty())
    {
        if(valueType == Double)
        {
            *num_confirm = obj.value("confirm").toDouble();
            *num_suspect = obj.value("suspect").toDouble();
            *num_dead = obj.value("dead").toDouble();
            *num_heal = obj.value("heal").toDouble();
            return 0;
        }
        else if(valueType == String)
        {
            *num_confirm = obj.value("confirm").toString().toDouble();
            *num_suspect = obj.value("suspect").toString().toDouble();     //考虑负值-5353
            *num_dead = obj.value("dead").toString().toDouble();
            *num_heal = obj.value("heal").toString().toDouble();
            return 0;
        }
    }
    else
        return -1;
}
//获取两个日期的间隔天数
int Dialog::getDay(QString date)
{
    QDate date1 = QDate::fromString(date, "yyyyMMdd");
    QString current_time =  QDateTime::currentDateTime().toString("yyyyMMdd");  //当前日期QString类型
    QDate date2 = QDate::fromString(current_time, "yyyyMMdd");
    qint16 day = date1.daysTo(date2);
//    qDebug() << date1 << date2 << day;
    return day;
}

void Dialog::disInfo(QString info)
{
//    ui->tb_info->append(info);
}

void Dialog::drawLine(void)
{
    if(dataType == String)
    {
        //窗口1:新增疑似和新增确诊
        widgetDrawLine(ui->widget_1, AddDate, AddConfirm, AddSuspect);
        //窗口2:累计确诊和累计疑似
        widgetDrawLine(ui->widget_2, TotalDate, TotalConfirm, TotalSuspect);
        //窗口3:累计死亡和治愈
        widgetDrawLine(ui->widget_3, TotalDate, TotalHeal, TotalDead);
    }
    else if(dataType == Double)
    {
        //窗口1:新增疑似和新增确诊
        widgetDrawLine(ui->widget_1, AddDate, AddConfirmDub, AddSuspectDub);
        //窗口2:累计确诊和累计疑似
        widgetDrawLine(ui->widget_2, TotalDate, TotalConfirmDub, TotalSuspectDub);
        //窗口3:累计死亡和治愈
        widgetDrawLine(ui->widget_3, TotalDate, TotalHealDub, TotalDeadDub);
    }
    ui->widget_1->graph(0)->setName("新增确诊");
    ui->widget_1->graph(1)->setName("新增疑似");

    ui->widget_2->graph(0)->setName("累计疑似");
    ui->widget_2->graph(1)->setName("累计确诊");

    ui->widget_3->graph(0)->setName("累计治愈");
    ui->widget_3->graph(1)->setName("累计死亡");
}

//容器类转换:QString转换为double
QVector<double> Dialog::QStringToDouble(QVector<QString> str, uint16_t len)
{
    QVector<double> dub(len);

    for(int i = 0; i < str.size(); i++)
    {
        dub[i] = str[i].toDouble();
    }
    return dub;
}

//获取两个double容器类的最大值
double Dialog::getMaxVaule(QVector<double> dub1, QVector<double> dub2)
{
    double max = 0;
    for(int i = 0; i < dub1.size(); i++)
    {
        if(max < dub1[i])
            max = dub1[i];
    }
    for(int i = 0; i < dub2.size(); i++)
    {
        if(max < dub2[i])
            max = dub2[i];
    }

    return max;
}

void Dialog::widgetInit(QCustomPlot *widget, QColor clr1, QColor clr2)
{
    widget->addGraph();
    widget->graph(0)->setLineStyle(QCPGraph::lsLine);
    widget->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 5));

    widget->addGraph();
    widget->graph(1)->setLineStyle(QCPGraph::lsLine);
    widget->graph(1)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 5));

    widget->xAxis->setSubTicks(false);          //小格刻度不显示
    widget->xAxis->setTickPen(QPen(Qt::white));
    widget->xAxis->setTickLabelFont(QFont(QFont().family(), 8));        //字体和大小
    widget->xAxis->setTickLabelRotation(60);        //标签旋转角度

//    widget->xAxis->rescale(true);   //刻度自适应,默认省略

    widget->yAxis->setTickPen(QPen(Qt::white));
    widget->yAxis->setSubTickPen(QPen(Qt::white));
    widget->yAxis->setTickLabelFont(QFont(QFont().family(), 8));
//    widget->yAxis->rescale(true);   //刻度自适应,默认省略

    widget->graph(0)->setPen(QPen(clr1));   //QColor(255, 100, 0)
    widget->graph(1)->setPen(QPen(clr2));   //QColor(50, 200, 0)
}

//画折线图，数据类型是QString
void Dialog::widgetDrawLine(QCustomPlot *widget, QVector<QString> date,
                           QVector<QString> data1, QVector<QString> data2)
{

    uint16_t dataSize = date.size();
//    qDebug() << dataSize;

    double maxValue = 0;

    QVector<double> data1Dub(data1.size());
    QVector<double> data2Dub(data2.size());

    //容器类转换
    data1Dub = QStringToDouble(data1, data1.size());
    data2Dub = QStringToDouble(data2, data2.size());

    maxValue = getMaxVaule(data1Dub, data2Dub);

    QVector<double> ticks;
    for(int i = 0; i < dataSize; i++)
        ticks << i;     //tick:0 1 2 3 4 5 6

    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);

    for(int i = 0; i < dataSize; i++)
    {
        if(i % 2 == 0)  //偶数
            textTicker->addTick(i, date.at(i));       //tick和标签对应
        else
            textTicker->addTick(i, " ");
    }

//    textTicker->addTicks(ticks, date);        //每一个都显示

    widget->xAxis->setTicker(textTicker);       //x轴为文本标签

    widget->xAxis->setRange(0, dataSize);
    widget->yAxis->setRange(0, maxValue + maxValue/20);
//    widget->yAxis->setNumberFormat("f");

    widget->graph(0)->setData(ticks, data1Dub);//曲线0添加数据新增确诊人数
    widget->graph(1)->setData(ticks, data2Dub);//曲线1添加数据新增疑似人数
    widget->replot();
}

//画折线图，数据类型是double
void Dialog::widgetDrawLine(QCustomPlot *widget, QVector<QString> date,
                           QVector<double> data1Dub, QVector<double> data2Dub)
{
    uint16_t dataSize = date.size();
//    qDebug() << dataSize;
    double maxValue = 0;
/*
    QVector<double> data1Dub(data1.size());
    QVector<double> data2Dub(data2.size());
    //容器类转换
    data1Dub = QStringToDouble(data1, data1.size());
    data2Dub = QStringToDouble(data2, data2.size());
*/
    maxValue = getMaxVaule(data1Dub, data2Dub);

    QVector<double> ticks;
    for(int i = 0; i < dataSize; i++)
        ticks << i;     //tick:0 1 2 3 4 5 6

    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);

    for(int i = 0; i < dataSize; i++)
    {
        if(i % 2 == 0)  //偶数
            textTicker->addTick(i, date.at(i));       //tick和标签对应
        else
            textTicker->addTick(i, " ");
    }

//    textTicker->addTicks(ticks, date);        //每一个都显示

    widget->xAxis->setTicker(textTicker);       //x轴为文本标签
    widget->xAxis->setTickLabelRotation(60);        //标签旋转角度

    widget->xAxis->setRange(0, dataSize);
    widget->yAxis->setRange(0, maxValue + maxValue/20);

    widget->graph(0)->setData(ticks, data1Dub);//曲线0添加数据新增确诊人数
    widget->graph(1)->setData(ticks, data2Dub);//曲线1添加数据新增疑似人数
    widget->replot();
}

void Dialog::chinaTreeParse(QJsonObject chinaTree)
{
    QString chinaName = chinaTree.value("name").toString();

    QJsonObject chinaTotal_obj = chinaTree.value("total").toObject();
    //中国累计
    QString chinaTotalConfirm = QString::number(chinaTotal_obj.value("confirm").toInt());    //28130;
    QString chinaTotalSuspect = QString::number(chinaTotal_obj.value("suspect").toInt());    //0;
    QString chinaTotalDead    = QString::number(chinaTotal_obj.value("dead").toInt());        //564
    QString chinaTotalHeal    = QString::number(chinaTotal_obj.value("heal").toInt());        //1301
//    ui->tb_info_2->setText(chinaName);

    qDebug() << chinaName << chinaTotalConfirm << chinaTotalSuspect << chinaTotalHeal << chinaTotalDead;;

    QJsonArray provinces_obj = chinaTree.value("children").toArray();    //包含所有的省份

    uint16_t provinceSize = provinces_obj.size();
//    qDebug() << provinceSize;       //省份个数34
    ui->tree->clear();
    ui->tree->sortByColumn(2, Qt::DescendingOrder);      //累计确诊排序

    for(int i = 0; i < provinceSize; i++)   //0-33
    {
        QJsonObject province_obj = provinces_obj.at(i).toObject();      //0:湖北省
        dataAddTree(province_obj);
        // 0       1        2        3       4
        //省市  新增确诊  累计确诊  累计治愈  累计死亡
    }
}

void Dialog::countryTreeParse(QJsonArray areaTree_obj)
{
    ui->tree_2->clear();
    ui->tree_2->sortByColumn(1, Qt::DescendingOrder);      //累计确诊排序

    for(int i = 1; i < areaTree_obj.size(); i++)
    {
        QJsonObject obj = areaTree_obj.at(i).toObject();
        QString countryName = obj.value("name").toString(); //日本
    //    QJsonObject countrTotay_obj = obj.value("today").toObject();//新增恒为0
        QJsonObject countryTotal_obj = obj.value("total").toObject();
        uint16_t countryTotalConfirm = countryTotal_obj.value("confirm").toDouble();
        uint16_t countryTotalHeal    = countryTotal_obj.value("heal").toDouble();
        uint16_t countryTotalDead    = countryTotal_obj.value("Dead").toDouble();
    //    uint16_t countryTotalSucpect = countryTotal_obj.value("suspect").toDouble();
        //0      3    2     0
        //国家  确诊  治愈  死亡

        QTreeWidgetItem *country = new QTreeWidgetItem(ui->tree_2);

        country->setData(0, Qt::DisplayRole, countryName);
        country->setData(1, Qt::DisplayRole, countryTotalConfirm);
        country->setData(2, Qt::DisplayRole, countryTotalHeal);
        country->setData(3, Qt::DisplayRole, countryTotalDead);

    //    qDebug() << countryName << countryTotalConfirm << countryTotalHeal <<countryTotalDead << countryTotalSucpect ;
    }
}

void Dialog::dataAddTree(QJsonObject province_obj)
{
    QString provinceName = province_obj.value("name").toString();   //"湖北"
    //省份新增
    uint16_t provinceAddConfirm   = province_obj.value("today").toObject().value("confirm").toDouble();
    QJsonObject provinceTotal_obj = province_obj.value("total").toObject();
    //省份累计
    uint16_t provinceTotalConfirm = provinceTotal_obj.value("confirm").toDouble();
    uint16_t provinceTotalHeal    = provinceTotal_obj.value("heal").toDouble();
    uint16_t provinceTotalDead    = provinceTotal_obj.value("dead").toDouble();

//    qDebug() << provinceName << provinceAddConfirm << provinceTotalConfirm << provinceTotalHeal << provinceTotalDead << citySize;       //省份下面多少个市
    // 0       1        2        3       4
    //省市  新增确诊  累计确诊  累计治愈  累计死亡
    QTreeWidgetItem *province = new QTreeWidgetItem(ui->tree);

    province->setData(0, Qt::DisplayRole, provinceName);
    province->setData(1, Qt::DisplayRole, provinceAddConfirm);
    province->setData(2, Qt::DisplayRole, provinceTotalConfirm);
    province->setData(3, Qt::DisplayRole, provinceTotalHeal);
    province->setData(4, Qt::DisplayRole, provinceTotalDead);

    QJsonArray citys_obj = province_obj.value("children").toArray();    //包含当前省的所有市
    uint16_t citySize = citys_obj.size();        //城市的个数

    for(int j = 0; j < citySize; j++)
    {
        QJsonObject city_obj = citys_obj.at(j).toObject();

        QString cityName = city_obj.value("name").toString();
        uint16_t cityAddConfirm   = city_obj.value("today").toObject().value("confirm").toInt();

        QJsonObject cityTotal_obj = city_obj.value("total").toObject();
        uint16_t cityTotalConfirm = cityTotal_obj.value("confirm").toInt();
        uint16_t cityTotalHeal    = cityTotal_obj.value("heal").toInt();
        uint16_t cityTotalDead    = cityTotal_obj.value("dead").toInt();

        QTreeWidgetItem *citys = new QTreeWidgetItem(province);

        citys->setData(0, Qt::DisplayRole, cityName);
        citys->setData(1, Qt::DisplayRole, cityAddConfirm);
        citys->setData(2, Qt::DisplayRole, cityTotalConfirm);
        citys->setData(3, Qt::DisplayRole, cityTotalHeal);
        citys->setData(4, Qt::DisplayRole, cityTotalDead);
    }
}

uint8_t Dialog::getValueType(QJsonObject obj, QString str)
{
    uint8_t tpy = obj.value(str).type();
    return tpy;
}

int Dialog::getTotalAddData(QJsonObject chinaTotal, QJsonObject chinaAdd)
{
    if(!chinaTotal.isEmpty() && !chinaAdd.isEmpty())
    {
        uint16_t chinaTotal_confirm, chinaTotal_suspect, chinaTotal_dead, chinaTotal_heal;
        uint16_t chinaAdd_confirm, chinaAdd_suspect, chinaAdd_dead, chinaAdd_heal;

        getNum(chinaAdd, &chinaAdd_confirm, &chinaAdd_suspect, &chinaAdd_dead, &chinaAdd_heal);
        getNum(chinaTotal, &chinaTotal_confirm, &chinaTotal_suspect, &chinaTotal_dead, &chinaTotal_heal);

        ui->lbe_total_confirm->setText(QString::number(chinaTotal_confirm));
        ui->lbe_total_suspect->setText(QString::number(chinaTotal_suspect));
        ui->lbe_total_dead->setText(QString::number(chinaTotal_dead));
        ui->lbe_total_heal->setText(QString::number(chinaTotal_heal));

        ui->lbe_add_confirm->setText("+" + QString::number(chinaAdd_confirm));
//        ui->lbe_add_suspect->setText("+" + QString::number(chinaAdd_suspect));        //取最新值
        ui->lbe_add_dead->setText("+" + QString::number(chinaAdd_dead));
        ui->lbe_add_heal->setText("+" + QString::number(chinaAdd_heal));
        return 0;
    }
    else
        return -1;
}


void Dialog::articleParse(QJsonArray arr)
{
    uint16_t arrSize = arr.size();
    qDebug() << "共 " << arrSize << " 条新闻";
    for(int i = 0; i < arrSize; i++)
    {
        QJsonObject article_obj = arr.at(i).toObject();//每一篇文件信息
        QString cmsId = article_obj.value("cmsId").toString();
        QString media = article_obj.value("media").toString();
        QString publish_time = article_obj.value("publish_time").toString();
        QString desc = article_obj.value("desc").toString();
        QString url = article_obj.value("url").toString();
        QString title = article_obj.value("title").toString();

        qDebug() << publish_time << media << title << url;
    }
}
