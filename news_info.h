#ifndef NEWS_INFO_H
#define NEWS_INFO_H

#include <QDialog>

namespace Ui {
class news_info;
}

class news_info : public QDialog
{
    Q_OBJECT

public:
    explicit news_info(QWidget *parent = 0);
    ~news_info();

private:
    Ui::news_info *ui;
};

#endif // NEWS_INFO_H
