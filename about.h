#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>
#include <QDesktopServices>

namespace Ui {
class about;
}

class about : public QDialog
{
    Q_OBJECT

public:
    explicit about(QWidget *parent = 0);
    ~about();

private slots:
    void anchorClickedSlot(const QUrl& url);


private:
    Ui::about *ui;
};

#endif // ABOUT_H
