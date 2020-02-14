#ifndef RUMOR_INFO_H
#define RUMOR_INFO_H

#include <QDialog>
//网络相关头文件
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkConfigurationManager>

//JSON相关头文件
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

#include <QFile>

namespace Ui {
class rumor_info;
}

class rumor_info : public QDialog
{
    Q_OBJECT

public:
    explicit rumor_info(QWidget *parent = 0);
    ~rumor_info();
    void paraseRumorInfo(QString filename);
    void getRumorInfo(QString rumor_id);
    QString bgmClr_true = "42a163";
    QString bgmClr_fake = "c41f20";
    QString bgmClr_doubt = "484848";
    void disRumorInfo(QJsonObject content_obj);

private slots:
    void httpReadyRead();   //有可用数据
    void httpFinished();  //完成下载

    void on_btn_back_clicked();

private:
    Ui::rumor_info *ui;

    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QUrl url;
    QFile *file;
    QString filename;
    QString rumor_infoApi = "https://vp.fact.qq.com/miniArtData?id=";
    QString rumorInfoHtmlFileName = "html_rumor_info.txt";

};

#endif // RUMOR_INFO_H
