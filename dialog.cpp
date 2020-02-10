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

    wigetAddGraph(ui->widget_chart);

//    widgetInit(ui->widget_chart, QColor(33, 144, 5), QColor(135, 135, 139)); //累计治愈/死亡

    QTimer *timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000); //ms = 1s
//    treeAddData();

    ui->tb_news->setOpenLinks(false);
    connect(ui->tb_news, SIGNAL(anchorClicked(const QUrl&)),this, SLOT(anchorClickedSlot(const QUrl&)));
    /* 新闻显示 */
    /*
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
*/
    ui->rb_group->setId(ui->rb0_add, 0);
    ui->rb_group->setId(ui->rb1_total_CfmSpt, 1);
    ui->rb_group->setId(ui->rb2_toal_HealDead, 2);
    ui->rb_group->setId(ui->rb3_rate, 3);

//    ui->rb0_add->setCheckable(true);
}

void Dialog::anchorClickedSlot(const QUrl& url)
{
    ShellExecuteA(NULL, "open", url.toString().toStdString().c_str(), "", "", SW_SHOW);
}

Dialog::~Dialog()
{
    delete ui;
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


void Dialog::on_btn_about_clicked()
{
    this->ab_win.setWindowTitle("关于");
    this->ab_win.exec();
}
