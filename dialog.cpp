#include "dialog.h"
#include "ui_dialog.h"
//#include <windows.h>
//#include <qt_windows.h>

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
#include <QApplication>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //右上角不显示帮助按钮
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

    //属性的用法
    /*
    ui->lbe_add_confirm->setProperty("number", 1933);   //不可见，仅为一个属性
    QVariant number = ui->lbe_add_confirm->property("number");
    qDebug() << number;     //QVariant(int, 1933)
*/
    this->setWindowTitle("2019_nCoV冠状病毒感染疫情实时监控_" + verison);
    manager = new QNetworkAccessManager(this);          //新建网络请求对象

    wigetAddGraph(ui->widget_chart);

    QTimer *timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000); //ms = 1s
//    treeAddData();

    ui->tb_news->setOpenLinks(false);
    connect(ui->tb_news, SIGNAL(anchorClicked(const QUrl&)), this, SLOT(anchorClickedSlot(const QUrl&)));

    ui->btn_group->setId(ui->btn_line_0, 0);
    ui->btn_group->setId(ui->btn_line_1, 1);
    ui->btn_group->setId(ui->btn_line_2, 2);
    ui->btn_group->setId(ui->btn_line_3, 3);

    emit on_btn_update_clicked();
}


Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btn_update_clicked()
{
//    qDebug() << isNetWorkOnline();
    if(isNetWorkOnline() == true)
    {
    //    ui->btn_update->setEnabled(false);
        /*
        QList<QString> list;
        list.clear();
        list << "2020-01-15_09_00_00_000";
        list << "2020-01-20_09_00_00_000";
        list << "2020-01-25_09_00_00_000";
        list << "2020-02-05_09_00_00_000";
        list << "2020-02-10_09_00_00_000";
        list << "2020-02-15_09_00_00_000";
        list << "2020-02-20_09_00_00_000";
        list << "2020-02-23_09_00_00_000";
        static int i = 0;
        QDateTime dateTime = QDateTime::fromString(list[i], "yyyy-MM-dd_hh_mm_ss_zzz");
        qint64 timestamp = dateTime.toMSecsSinceEpoch();        //毫秒级时间戳
        QString current_time = list[i];
        qDebug() << list[i] << timestamp;
        i++;
        */
        qint64 timestamp = QDateTime::currentDateTime().toMSecsSinceEpoch(); //毫秒级
        QString current_time =  QDateTime::currentDateTime().toString("yyyyMMdd_hh_mm_ss_zzz");

        QString timestamp_str;
        timestamp_str.setNum(timestamp, 10);

        if(selAPI == 1)
            selAPI = 2;
        else if(selAPI == 2)
            selAPI = 1;

        if(selAPI == 1)
            url = QUrl(data1_Api + timestamp_str);
        else if(selAPI == 2)
            url = QUrl(data2_Api + timestamp_str);

//        url = QUrl("https://view.inews.qq.com/g2/getOnsInfo?name=disease_h5");
        //只包含全国累计数据
    //    url = QUrl("https://ncov-api.werty.cn:2021/latest/tx/");
//        qDebug() << url.toString();
        qDebug() << "网络正常,开始更新疫情数据" + url.toString();
        filename = "data_" +current_time + ".json";
        file = new QFile(filename);

        if(!file->open(QIODevice::WriteOnly))
        {
    //        qDebug() << "文件打开失败";
            delete file;
            file = 0;
            return;
        }

    //        qDebug() << "网络正常";
            reply = manager->get(QNetworkRequest(url));     //发送get请求数据
            //下载完成执行槽函数
            connect(reply,SIGNAL(finished()),this,SLOT(httpFinished()));
            //有可用的数据
            connect(reply,SIGNAL(readyRead()),this,SLOT(httpReadyRead()));
    }
    else
    {
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
    this->ab_win.exec();
}

void Dialog::on_btn_rumor_clicked()
{
//    this->rm_win.show();
//    qDebug() << isNetWorkOnline();
    if(isNetWorkOnline() == true)
    {
        this->rm_win.getRumorNews(0);   //当天
    //    this->rm_win.getRumorNews(1); //昨天
    //    this->rm_win.getRumorNews(2); //前天
        this->rm_win.exec();
    }
    else
    {
        QMessageBox::warning(NULL, "错误", "无网络连接，请检查网络", QMessageBox::Yes);
    }
}

void Dialog::on_btn_chkUpdate_clicked()
{
    QString refUrl = "http://www.wangchaochao.top/2019/03/31/Qt-Update/";
    QString refTitle = "Qt实现软件自动更新的一种简单方法";
    int ret = QMessageBox::information(this, "检查更新", "更新功能暂未添加，可参考以下文章:\n" + refTitle, "去看看", "不去了");

    if(ret == 0)
    {
        QDesktopServices::openUrl(QUrl(refUrl));
    }
}
