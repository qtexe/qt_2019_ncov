#ifndef DIALOG_H
#define DIALOG_H

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
#include <QTreeWidgetItem>
#include "qjsonvalue.h"

#include "qcustomplot.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    bool isNetWorkOnline();
    int dataParse(QByteArray str);
    int readFromFile(QString filename);

    int getNum(QJsonObject obj, uint16_t *num_confirm, uint16_t *num_suspect, uint16_t *num_dead, uint16_t *num_heal);
    int getDay(QString date);
    int getTotalAddData(QJsonObject chinaTotal, QJsonObject chinaAdd);

    void chinaDayListParse(QJsonArray chinaDayListObj);
    void chinaDayAddListParse(QJsonArray chinaDayAddListObj);
    void disInfo(QString info);

    QVector<double> QStringToDouble(QVector<QString> str, uint16_t len);
    double getMaxVaule(QVector<double> dub1, QVector<double> dub2);
    void drawLine(void);
    //参数是string
    void widgetDrawLine(QCustomPlot *widget, QVector<QString> date,
                        QVector<QString> data1, QVector<QString> data2);
    //参数是double
    void widgetDrawLine(QCustomPlot *widget, QVector<QString> date,
                        QVector<double> data1Dub, QVector<double> data2Dub);
    void dataAddTree(QJsonObject province_obj);
    void countryTreeParse(QJsonArray areaTree_obj);

    void disTip(QMouseEvent *event, QCustomPlot *widget, QVector<QString> date);
    void widgetInit(QCustomPlot *widget, QColor clr1, QColor clr2);
    void chinaTreeParse(QJsonObject chinaTree);
    uint8_t getValueType(QJsonObject obj, QString str);
    void articleParse(QJsonArray arr);

    enum valueType {
        Null =  0x0,
        Bool = 0x1,
        Double = 0x2,
        String = 0x3,
        Array = 0x4,
        Object = 0x5,
        Undefined = 0x80
    };
    uint8_t dataType = Null;

private slots:
    void on_btn_update_clicked();
    void httpReadyRead();   //有可用数据
    void httpFinished();  //完成下载
//    void updateDataReadProgress(qint64 bytesRead, qint64 totalBytes);
    void widget_1_event(QMouseEvent*);
    void widget_2_event(QMouseEvent*);
    void widget_3_event(QMouseEvent*);
    void update();
    void anchorClickedSlot(const QUrl& url);

private:
    Ui::Dialog *ui;

    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QUrl url;
    QFile *file;
    QString filename;

    //腾讯,最新接口有新闻,添加了病死率和治愈率
    QString dataApi = "https://view.inews.qq.com/g2/getOnsInfo?name=disease_h5&_=";     //时间戳可以不添加
    //2020_02_10:添加最新动态新闻键值，大小116KB

    //网易api,目前还没新闻，和腾讯非常相似
//    QString dataApi = "https://c.m.163.com/ug/api/wuhan/app/data/list-total?t=";

//    QString newsApi = "http://api.tianapi.com/txapi/ncov/index?key=964dc226dd5b57e892e6199735b6c55f";

    bool dataFlag = true;   //true:data, false:news

    QVector<QString> AddDate;       //新增从1.20

    QVector<QString> AddConfirm;    //新增确诊
    QVector<QString> AddSuspect;    //新增疑似
    QVector<QString> AddDead;       //新增死亡
    QVector<QString> AddHeal;       //新增治愈

    QVector<double> AddConfirmDub;    //新增确诊
    QVector<double> AddSuspectDub;    //新增疑似
    QVector<double> AddDeadDub;       //新增死亡
    QVector<double> AddHealDub;       //新增治愈

    QVector<QString> TotalDate;     //累计从1.13

    QVector<QString> TotalConfirm;  //累计确诊
    QVector<QString> TotalSuspect;  //累计疑似
    QVector<QString> TotalDead;     //累计死亡
    QVector<QString> TotalHeal;     //累计治愈

    QVector<double> TotalConfirmDub;  //累计确诊
    QVector<double> TotalSuspectDub;  //累计疑似
    QVector<double> TotalDeadDub;     //累计死亡
    QVector<double> TotalHealDub;     //累计治愈

    QVector<double> chinaDayListHealRate;  //累计治愈率，从1.20开始
    QVector<double> chinaDayListDeadRate;  //累计死亡率，从1.20开始
};

class ncovPerson
{
public:
    int confirm;   //确诊
    int suspect;   //疑似
    int heal;      //治愈
    int dead;      //死亡
    QString deadRate;   //死亡率
    QString healRate;   //治愈率
    bool isUpdated;     //国家数据中， 是否更新
    QString date;       //历史数据中包含日期
};


#endif // DIALOG_H
