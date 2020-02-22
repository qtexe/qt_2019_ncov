#ifndef NEWS_INFO_H
#define NEWS_INFO_H

#include <QDialog>
#include <QUrl>

namespace Ui {
class news_info;
}

class news_info : public QDialog
{
    Q_OBJECT

public:
    explicit news_info(QWidget *parent = 0);
    ~news_info();
    void openURL(QUrl url);

private slots:
    void on_btn_refresh_clicked();

    void on_btn_close_clicked();

private:
    Ui::news_info *ui;
    QUrl link;
};

#endif // NEWS_INFO_H
