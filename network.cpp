#include "dialog.h"

void Dialog::update()
{
    static uint16_t cnt = 0;
    cnt++;
    if(cnt == 60 * updateTime)   //60s = 1min
    {
        qDebug() << "开始更新";
        emit on_btn_update_clicked();//触发更新
        cnt = 0;
    }
}
bool Dialog::isNetWorkOnline()
{
    QNetworkConfigurationManager mgr;
    return mgr.isOnline();
}
int Dialog::readFromFile(QString filename)
{
//    qDebug() << "开始解析数据";
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
    file.remove();            //删除文件
    return 0;
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
