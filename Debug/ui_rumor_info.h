/********************************************************************************
** Form generated from reading UI file 'rumor_info.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUMOR_INFO_H
#define UI_RUMOR_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_rumor_info
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *tb_rumor_info;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *rumor_info)
    {
        if (rumor_info->objectName().isEmpty())
            rumor_info->setObjectName(QStringLiteral("rumor_info"));
        rumor_info->resize(634, 345);
        verticalLayout = new QVBoxLayout(rumor_info);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tb_rumor_info = new QTextBrowser(rumor_info);
        tb_rumor_info->setObjectName(QStringLiteral("tb_rumor_info"));

        verticalLayout->addWidget(tb_rumor_info);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_back = new QPushButton(rumor_info);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        btn_back->setFont(font);

        horizontalLayout->addWidget(btn_back);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(rumor_info);

        QMetaObject::connectSlotsByName(rumor_info);
    } // setupUi

    void retranslateUi(QDialog *rumor_info)
    {
        rumor_info->setWindowTitle(QApplication::translate("rumor_info", "Dialog", Q_NULLPTR));
        tb_rumor_info->setHtml(QApplication::translate("rumor_info", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:16pt; font-weight:600;\">\345\244\251\346\260\224\346\232\226\345\222\214\344\273\216\345\215\227\346\226\271\345\233\236\345\275\222\345\214\227\346\226\271\347\232\204\351\270\237\344\274\232\345\270\246\345\233\236\347\227\205\346\257\222\357\274\214\346\204\237\346\237\223\344\272\272\347\261\273</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\276\256\350"
                        "\275\257\351\233\205\351\273\221'; font-size:6pt; font-weight:600;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; color:#555753;\">&quot;\346\265\201\344\274\240\350\257\264\346\263\225\357\274\232\345\244\251\346\260\224\345\233\236\346\232\226\357\274\214\344\273\216\345\215\227\346\226\271\351\243\236\345\233\236\345\214\227\346\226\271\347\232\204\351\270\237\347\273\217\350\277\207\347\226\253\345\214\272\344\274\232\345\270\246\345\233\236\347\227\205\346\257\222\357\274\214\346\204\237\346\237\223\344\272\272\347\261\273\343\200\202&quot;</span></p>\n"
"<hr />\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; font-weight:600;\">\350\276\203\347\234\237"
                        "\351\211\264\345\256\232\357\274\232</span><span style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; color:#ffffff; background-color:#484848;\"> [\347\226\221]\346\234\211\345\244\261\345\256\236 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; font-weight:600; color:#000000;\">\346\237\245\350\257\201\350\246\201\347\202\271\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:15pt; color:#ffffff; background-color:#333333;\">  1  </span><span sty"
                        "le=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; color:#000000;\"> \345\206\240\347\212\266\347\227\205\346\257\222\346\230\257\344\270\200\347\261\273\344\270\273\350\246\201\345\274\225\350\265\267\345\221\274\345\220\270\351\201\223\343\200\201\350\202\240\351\201\223\347\226\276\347\227\205\347\232\204\347\227\205\345\216\237\344\275\223\343\200\202\351\231\244\344\272\206\345\217\257\346\204\237\346\237\223\344\272\272\347\261\273\357\274\214\350\277\230\345\217\257\346\204\237\346\237\223\347\214\252\343\200\201\347\211\233\343\200\201\347\214\253\343\200\201\347\212\254\343\200\201\351\252\206\351\251\274\343\200\201\350\235\231\350\235\240\343\200\201\350\200\201\351\274\240\343\200\201\345\210\272\347\214\254\347\255\211\345\244\232\347\247\215\345\223\272\344\271\263\345\212\250\347\211\251\344\273\245\345\217\212\345\244\232\347\247\215\351\270\237\347\261\273\343\200\202\351\270\237\347\261\273\344\275\234\344\270\272\345\256\277\344\270\273\344\271\213\344\270\200"
                        "\357\274\214\345\205\266\344\274\232\346\204\237\346\237\223SARS\347\227\205\346\257\222\346\210\226MERS\347\227\205\346\257\222\345\267\262\350\242\253\350\257\201\345\256\236\343\200\202\346\234\254\346\254\241\346\226\260\345\236\213\345\206\240\347\212\266\347\227\205\346\257\222\350\267\237SARS\345\261\236\344\272\216\344\270\200\344\270\252\346\227\217\357\274\214\351\270\237\347\261\273\346\204\237\346\237\223\345\217\257\350\203\275\344\270\215\350\241\250\347\216\260\347\227\207\347\212\266\357\274\214\344\275\206\345\246\202\346\236\234\344\272\272\346\216\245\350\247\246\346\210\226\351\243\237\347\224\250\346\220\272\345\270\246\347\227\205\346\257\222\351\270\237\347\261\273\357\274\214\344\274\232\350\242\253\346\204\237\346\237\223\345\271\266\345\274\225\350\265\267\347\227\207\347\212\266\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\276\256\350\275\257\351\233"
                        "\205\351\273\221'; font-size:15pt; color:#ffffff; background-color:#333333;\">  2  </span><span style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; color:#000000;\"> \346\211\200\344\273\245\345\244\251\346\260\224\345\233\236\346\232\226\357\274\214\345\214\227\351\243\236\347\232\204\351\270\237\345\217\257\350\203\275\346\220\272\345\270\246\347\227\205\346\257\222\357\274\214\344\275\206\350\277\231\345\271\266\344\270\215\346\204\217\345\221\263\347\235\200\344\273\200\344\271\210\343\200\202\345\233\240\344\270\272\350\213\245\346\262\241\346\234\211\346\234\254\346\254\241\347\226\253\346\203\205\357\274\214\351\270\237\347\261\273\344\271\237\344\274\232\346\220\272\345\270\246\347\227\205\346\257\222\357\274\214\344\272\272\347\261\273\344\270\216\350\277\231\344\272\233\351\207\216\347\224\237\345\212\250\347\211\251\347\233\270\345\256\211\346\227\240\344\272\213\357\274\214\350\242\253\346\204\237\346\237\223\347\232\204\346\246\202\347\216\207\345\276\210\344\275"
                        "\216\357\274\233\345\217\246\345\244\226\357\274\214\345\214\227\346\226\271\345\237\216\345\270\202\346\257\224\345\246\202\351\273\221\351\276\231\346\261\237\343\200\201\345\214\227\344\272\254\347\255\211\345\235\207\346\234\211\346\225\260\347\231\276\347\241\256\350\257\212\347\227\205\344\276\213\357\274\214\347\227\205\346\257\222\345\234\250\345\205\250\345\233\275\346\211\251\346\225\243\346\230\257\346\227\242\345\256\232\344\272\213\345\256\236\357\274\214\345\217\252\350\246\201\346\210\221\344\273\254\345\201\232\345\245\275\345\237\272\347\241\200\351\230\262\346\212\244\357\274\214\344\270\215\345\220\203\351\207\216\347\224\237\345\212\250\347\211\251\357\274\214\347\226\253\346\203\205\344\270\215\344\274\232\345\233\240\344\270\272\351\270\237\347\261\273\345\210\260\346\235\245\350\200\214\345\212\240\351\207\215\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345"
                        "\276\256\350\275\257\351\233\205\351\273\221'; font-size:7pt; color:#000000;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; font-weight:600; color:#000000;\">\346\237\245\350\257\201\350\200\205\357\274\232</span><span style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; color:#000000;\">\350\260\242\346\234\233\346\227\266  </span><span style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; color:#8d8d8d;\">\350\215\257\347\220\206\345\255\246\347\241\225\345\243\253\357\274\214\347\237\245\350\264\235\345\204\277\347\247\221\350\215\257\345\270\210</span></p>\n"
"<hr />\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\276\256\350\275\257\351\233\205"
                        "\351\273\221'; font-size:12pt; font-weight:600; color:#000000;\">\346\227\266\351\227\264</span><span style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; color:#000000;\">\357\274\2322020-02-13\343\200\200</span><span style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:600; color:#000000;\">\346\235\245\346\272\220</span><span style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; color:#000000;\">\357\274\232\350\205\276\350\256\257\350\276\203\347\234\237</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        btn_back->setText(QApplication::translate("rumor_info", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class rumor_info: public Ui_rumor_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUMOR_INFO_H
