#include "about.h"
#include "ui_about.h"
//#include "windows.h"
#include <QDesktopServices>

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);

    this->setWindowTitle("关于");

    ui->tb_about->setOpenLinks(false);
    connect(ui->tb_about, SIGNAL(anchorClicked(const QUrl&)), this, SLOT(anchorClickedSlot(const QUrl&)));
}

about::~about()
{
    delete ui;
}
void about::anchorClickedSlot(const QUrl& url)
{
    QDesktopServices::openUrl(url);
//    ShellExecuteA(NULL, "open", url.toString().toStdString().c_str(), "", "", SW_SHOW);
}
