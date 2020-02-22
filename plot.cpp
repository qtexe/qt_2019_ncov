#include "dialog.h"
#include "ui_dialog.h"

//添加2条曲线
void Dialog::wigetAddGraph(QCustomPlot *widget)
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
    widget->xAxis->setTickLabelRotation(150);        //标签旋转角度

//    widget->xAxis->rescale(true);   //刻度自适应,默认省略
}

//设置曲线颜色
void Dialog::wigetSetColor(QCustomPlot *widget, QColor clr1, QColor clr2)
{
    widget->yAxis->setTickPen(QPen(Qt::white));
    widget->yAxis->setSubTickPen(QPen(Qt::white));
    widget->yAxis->setTickLabelFont(QFont(QFont().family(), 8));
//    widget->yAxis->rescale(true);   //刻度自适应,默认省略

    widget->graph(0)->setPen(QPen(clr1));   //QColor(255, 100, 0)
    widget->graph(1)->setPen(QPen(clr2));   //QColor(50, 200, 0)
}

//用于在一个画布上绘制
void Dialog::widgetDrawLine(QCustomPlot *widget, QString chartName, QString name1, QString name2,
                            QColor clr1, QColor clr2, QVector<QString> date,
                           QVector<double> data1, QVector<double> data2)
{
    ui->lbe_chart_name->setText(chartName);
    //图例名字
    ui->lbe_chart_line1_name->setText(name1);
    ui->lbe_chart_line2_name->setText(name2);
    //图例颜色设置
    QString style1 = ui->lbe_chart_line1_clr->styleSheet();
    QString style2 = ui->lbe_chart_line2_clr->styleSheet();

    style1.append(rgbToStyle(clr1));
    style2.append(rgbToStyle(clr2));

    ui->lbe_chart_line1_clr->setStyleSheet(style1);
    ui->lbe_chart_line2_clr->setStyleSheet(style2);

    widget->graph(0)->setName(name1);       //设置曲线名字
    widget->graph(1)->setName(name2);       //设置曲线名字

    widget->graph(0)->setPen(QPen(clr1));   //QColor(255, 100, 0)
    widget->graph(1)->setPen(QPen(clr2));   //QColor(50, 200, 0)

    double maxValue = getMaxVaule(data1, data2);
    uint16_t dataSize = data1.size();

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
    if(clickId == 3)
    {
        widget->yAxis->setRange(0, maxValue + 2);
    }
    else
        widget->yAxis->setRange(0, maxValue + maxValue/20);

    widget->graph(0)->setData(ticks, data1);//曲线0添加数据新增确诊人数
    widget->graph(1)->setData(ticks, data2);//曲线1添加数据新增疑似人数

    widget->replot();
}

QString Dialog::rgbToStyle(QColor rbg)
{
    QString r_str = QString::number(rbg.red()) + ", ";
    QString g_str = QString::number(rbg.green()) + ", ";
    QString b_str = QString::number(rbg.blue()) + "); ";

    QString style = "background-color: rgb(" + r_str + g_str + b_str;
//    qDebug() << style;
    return style;
}

//画折线图，数据类型是double
void Dialog::widgetDrawLine(QCustomPlot *widget, QVector<QString> date,
                           QVector<double> data1Dub, QVector<double> data2Dub)
{
    uint16_t dataSize = date.size();
//    qDebug() << dataSize;
    double maxValue = getMaxVaule(data1Dub, data2Dub);;

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
