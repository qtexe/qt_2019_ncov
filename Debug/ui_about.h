/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbe_sub;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *lbe_sub_2;
    QLabel *label_9;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QStringLiteral("about"));
        about->resize(495, 391);
        verticalLayout_6 = new QVBoxLayout(about);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_6 = new QLabel(about);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(15);
        label_6->setFont(font);
        label_6->setWordWrap(true);

        verticalLayout_2->addWidget(label_6);

        line_4 = new QFrame(about);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_5 = new QLabel(about);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(13);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setOpenExternalLinks(true);

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 30);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2->setStretch(0, 4);
        verticalLayout_2->setStretch(2, 9);

        verticalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label = new QLabel(about);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(613, 461));
        label->setFont(font);

        verticalLayout_5->addWidget(label);

        line_3 = new QFrame(about);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lbe_sub = new QLabel(about);
        lbe_sub->setObjectName(QStringLiteral("lbe_sub"));
        lbe_sub->setStyleSheet(QStringLiteral("image: url(:/my_sub.jpg);"));
        lbe_sub->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(lbe_sub);

        label_3 = new QLabel(about);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(label_3);

        verticalLayout_3->setStretch(0, 7);
        verticalLayout_3->setStretch(1, 2);

        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lbe_sub_2 = new QLabel(about);
        lbe_sub_2->setObjectName(QStringLiteral("lbe_sub_2"));
        lbe_sub_2->setStyleSheet(QStringLiteral("image: url(:/my_blog.jpg);"));

        verticalLayout_4->addWidget(lbe_sub_2);

        label_9 = new QLabel(about);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);
        label_9->setOpenExternalLinks(true);

        verticalLayout_4->addWidget(label_9);

        verticalLayout_4->setStretch(0, 7);
        verticalLayout_4->setStretch(1, 2);

        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(2, 5);

        verticalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_6->setStretch(0, 4);
        verticalLayout_6->setStretch(1, 8);

        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QApplication::translate("about", "Dialog", Q_NULLPTR));
        label_6->setText(QApplication::translate("about", "\350\277\231\344\270\252\350\275\257\344\273\266\346\230\257\345\246\202\344\275\225\345\256\236\347\216\260\347\232\204\357\274\237", Q_NULLPTR));
        label_5->setText(QApplication::translate("about", "<html><head/><body><p><a href=\"https://www.qtexe.com\"><span style=\" text-decoration: underline; color:#0000ff;\">\345\237\272\344\272\216Qt\347\232\204\346\226\260\345\206\240\350\202\272\347\202\216\347\226\253\346\203\205\346\225\260\346\215\256\345\256\236\346\227\266\347\233\221\346\216\247\345\271\263\345\217\260</span></a></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("about", "\345\205\263\344\272\216\346\210\221", Q_NULLPTR));
        lbe_sub->setText(QString());
        label_3->setText(QApplication::translate("about", "<html><head/><body><p><a href=\"https://mp.weixin.qq.com/s/tFVO6CaXZEKRKgVtT5bSMg\"><span style=\" text-decoration: underline; color:#0000ff;\">\346\210\221\347\232\204\345\205\254\344\274\227\345\217\267</span></a></p></body></html>", Q_NULLPTR));
        lbe_sub_2->setText(QString());
        label_9->setText(QApplication::translate("about", "<html><head/><body><p><a href=\"http://www.wangchaochao.top/\"><span style=\" text-decoration: underline; color:#0000ff;\">\346\210\221\347\232\204\345\215\232\345\256\242</span></a></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
