#include "dialog.h"
#include "ui_dialog.h"

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
//    disTip(event, ui->widget_1, AddDate);
}

void Dialog::widget_2_event(QMouseEvent *event)
{
//    disTip(event, ui->widget_2, TotalDate);
}

void Dialog::widget_3_event(QMouseEvent *event)
{
//    disTip(event, ui->widget_3, TotalDate);
}

void Dialog::widget_chart_event(QMouseEvent *event)
{
    if(ui->rb1_total_CfmSpt->isChecked() | ui->rb2_toal_HealDead->isChecked())
    {
        disTip(event, ui->widget_chart, TotalDate);
    }
    else if(ui->rb0_add->isChecked())
        disTip(event, ui->widget_chart, AddDate);
//    else if(ui->rb3_rate->isChecked())
    else
        disTip(event, ui->widget_chart, RateDate);
}

//点击不同的按钮绘制不同的曲线
void Dialog::drawCharts(int id)
{
    qDebug() << id;
//    qDebug() << ui->rb_group->button(id)->text();
/*
    int id_rb0 = ui->rb_group->id(ui->rb0_add);
    int id_rb1 = ui->rb_group->id(ui->rb1_total_CfmSpt);
    int id_rb2 = ui->rb_group->id(ui->rb2_toal_HealDead);
    int id_rb3 = ui->rb_group->id(ui->rb3_rate);
*/
    switch(id)
    {
        case 0:
            widgetDrawLine(ui->widget_chart, "新增疑似/确诊趋势", "新增确诊", "新增疑似",
                clr1_1, clr1_2, AddDate, AddConfirmDub, AddSuspectDub);
            break;
        case 1:
            widgetDrawLine(ui->widget_chart, "累计疑似/确诊趋势", "累计确诊", "累计疑似",
                clr2_1, clr2_2, TotalDate, TotalConfirmDub, TotalSuspectDub);
            break;
        case 2:
        widgetDrawLine(ui->widget_chart, "累计治愈/死亡趋势", "累计治愈", "累计死亡",
                clr3_1, clr3_2, TotalDate, TotalHealDub, TotalDeadDub);
            break;
        case 3:
        widgetDrawLine(ui->widget_chart, "治愈率/病死率", "治愈率", "病死率",
                clr4_1, clr4_2, RateDate, chinaDayListHealRate, chinaDayListDeadRate);
            break;
        default:break;
    }
}
