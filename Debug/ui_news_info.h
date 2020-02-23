/********************************************************************************
** Form generated from reading UI file 'news_info.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWS_INFO_H
#define UI_NEWS_INFO_H

#include <ActiveQt/QAxWidget>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_news_info
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *le_url;
    QPushButton *btn_refresh;
    QAxWidget *flash_newsInfo;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_close;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *news_info)
    {
        if (news_info->objectName().isEmpty())
            news_info->setObjectName(QStringLiteral("news_info"));
        news_info->resize(545, 657);
        news_info->setSizeGripEnabled(false);
        news_info->setModal(false);
        verticalLayout = new QVBoxLayout(news_info);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(news_info);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        le_url = new QLineEdit(news_info);
        le_url->setObjectName(QStringLiteral("le_url"));
        le_url->setFont(font);
        le_url->setReadOnly(true);

        horizontalLayout_2->addWidget(le_url);

        btn_refresh = new QPushButton(news_info);
        btn_refresh->setObjectName(QStringLiteral("btn_refresh"));
        btn_refresh->setFont(font);

        horizontalLayout_2->addWidget(btn_refresh);


        verticalLayout->addLayout(horizontalLayout_2);

        flash_newsInfo = new QAxWidget(news_info);
        flash_newsInfo->setObjectName(QStringLiteral("flash_newsInfo"));

        verticalLayout->addWidget(flash_newsInfo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_close = new QPushButton(news_info);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setFont(font);

        horizontalLayout->addWidget(btn_close);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 10);
        verticalLayout->setStretch(2, 1);

        retranslateUi(news_info);

        QMetaObject::connectSlotsByName(news_info);
    } // setupUi

    void retranslateUi(QDialog *news_info)
    {
        news_info->setWindowTitle(QApplication::translate("news_info", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("news_info", "\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        btn_refresh->setText(QApplication::translate("news_info", "\345\210\267\346\226\260", Q_NULLPTR));
        btn_close->setText(QApplication::translate("news_info", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class news_info: public Ui_news_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWS_INFO_H
