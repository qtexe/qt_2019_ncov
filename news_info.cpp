#include "news_info.h"
#include "ui_news_info.h"
#include <QAxWidget>
#include <QUrl>
#include <QDebug>
news_info::news_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::news_info)
{
    ui->setupUi(this);
//    QAxWidget *flash = new QAxWidget(0, 0);      //QAxWidget使用的是ActiveX插件
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

    this->setWindowTitle("新闻详情_IE");

    ui->flash_newsInfo->resize(690, 570);                    //设置该控件的初始大小
    ui->flash_newsInfo->setControl(QString::fromUtf8("{8856F961-340A-11D0-A96B-00C04FD705A2}"));//注册组件ID
    ui->flash_newsInfo->setProperty("DisplayAlerts", false);//不显示警告信息
    ui->flash_newsInfo->setProperty("DisplayScrollBars", false);//显示滚动条
//    ui->flash_newsInfo->set

    //    qDebug() << "ActiveX Initial";
}

news_info::~news_info()
{
    delete ui;
}

void news_info::openURL(QUrl url)
{
    ui->le_url->setText(url.toString());
    link = url;
    ui->flash_newsInfo->resize(690, 520);
    this->resize(690,520+80);
    ui->flash_newsInfo->dynamicCall("Navigate(const QString&)", link.toString());//显示网页
    ui->flash_newsInfo->show();
}


void news_info::on_btn_refresh_clicked()
{
    openURL(link);
}

void news_info::on_btn_close_clicked()
{
    this->close();
}
