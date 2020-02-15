#include "dialog.h"
#include "ui_dialog.h"

void Dialog::anchorClickedSlot(const QUrl& url)
{
    QDesktopServices::openUrl(url);
//    ShellExecuteA(NULL, "open", url.toString().toStdString().c_str(), "", "", SW_SHOW);
}
void Dialog::closeEvent(QCloseEvent *win)
{
    int ret = QMessageBox::information(this, "提示", "是否关闭?", "是/Yes", "否/No");
    if(ret == 0)
    {
        win->accept();//不会将事件传递给组件的父组件
        qDebug()<<"已关闭";
    }
    else
        win->ignore();
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
            if(clickId < 3)
            {
                int y = widget->graph(i)->data()->at(x_val)->value;
                str = QString::number(y);
            }
            else
            {
                double y= widget->graph(i)->data()->at(x_val)->value;
                str = QString::number(y, 10, 1);
            }
            strToolTip += lineName + "：";
            strToolTip += str;
            if(clickId == 3)
                strToolTip += "%";
            if(i != lineNum - 1)
                strToolTip += "\n";
        }
        QToolTip::showText(cursor().pos(), strToolTip, widget);
    }
}

void Dialog::widget_chart_event(QMouseEvent *event)
{
    if(clickId == 1 | clickId == 2)
    {
        disTip(event, ui->widget_chart, TotalDate);
    }
    else if(clickId == 0)
        disTip(event, ui->widget_chart, AddDate);
//    else if(ui->rb3_rate->isChecked())
    else
        disTip(event, ui->widget_chart, RateDate);
}

//点击不同的按钮绘制不同的曲线
void Dialog::drawCharts(int id)
{
//    qDebug() << id;
    setSelectStyle(id);
    clickId = id;
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

void Dialog::setSelectStyle(int id)
{
    QString style1 =
            "border:3px groove rgb(126, 126, 126);"       //边框线条粗线,线型,颜色
            "border-radius:8px;"                       //圆角弧度
            "padding:2px 4px;"                        //文字离边框的距离,H/L
            "background-color: rgb(243, 246, 248);"    //背景颜色
            "color: rgb(0, 0, 0);";                //字体黑色;     //未选中

    QString style2 =
            "border:3px groove rgb(126, 126, 226);"      //边框线条粗线,线型,颜色
            "border-radius:8px;"                     //圆角弧度
            "padding:2px 4px;"                     //文字离边框的距离,H/L
            "background-color: rgb(238,244,255);"     //背景颜色
            "color: rgb(22,107,241);" ;                  //字体蓝色;

    ui->btn_group->button(id)->setStyleSheet(style2);

    QList<QAbstractButton*> btnList = ui->btn_group->buttons();
    btnList.removeAt(id);       //移除当前，其余设置未选中状态
    for(int i = 0; i < btnList.size(); i++)
    {
        btnList.at(i)->setStyleSheet(style1);
    }

}

