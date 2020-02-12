#ifndef RUMOR_H
#define RUMOR_H

#include <QDialog>

#include <QFile>
//网络相关头文件
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkConfigurationManager>

//JSON相关头文件
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

namespace Ui {
class rumor;
}

class rumor : public QDialog
{
    Q_OBJECT

public:
    explicit rumor(QWidget *parent = 0);
    ~rumor();
    void getRumorNews(uint8_t page);
    void parseRumor(QString filename);
    void disRumorNews(QJsonArray content_arr);

private slots:
    void anchorClickedSlot(const QUrl& url);
    void httpReadyRead();   //有可用数据
    void httpFinished();  //完成下载

private:
    Ui::rumor *ui;
//    QString rumorApi = "https://vp.fact.qq.com/loadmore?page=0&_=1581341095686";
    QString rumorApi = "https://vp.fact.qq.com/loadmore?page=";
    QString rumorUrl = "https://vp.fact.qq.com/article?id=";
    uint8_t rumorPage = 0;

    QString bgmClr_true = "42a163";
    QString bgmClr_fake = "c41f20";
    QString bgmClr_doubt = "484848";

    QString rumorHtmlFileName = "html_rumor.txt";

    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QUrl url;
    QFile *file;
    QString filename;
//    QString html;

};

#endif // RUMOR_H
