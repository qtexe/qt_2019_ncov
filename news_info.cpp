#include "news_info.h"
#include "ui_news_info.h"

news_info::news_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::news_info)
{
    ui->setupUi(this);
}

news_info::~news_info()
{
    delete ui;
}
