/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *btn_update;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLabel *lbe_update_time;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *lbe_add_confirm;
    QLabel *lbe_total_confirm;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *lbe_add_suspect;
    QLabel *lbe_total_suspect;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *lbe_add_heal;
    QLabel *lbe_total_heal;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *lbe_add_dead;
    QLabel *lbe_total_dead;
    QLabel *label_3;
    QCustomPlot *widget_1;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_18;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_19;
    QLabel *label_17;
    QCustomPlot *widget_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_21;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_23;
    QLabel *label_24;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_25;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_26;
    QLabel *label_27;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_28;
    QLabel *label_29;
    QTreeWidget *tree;
    QLabel *label_30;
    QTextBrowser *tb_news;
    QLabel *label_31;
    QCustomPlot *widget_2;
    QLabel *label_32;
    QTreeWidget *tree_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1146, 720);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        Dialog->setFont(font);
        Dialog->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        btn_update = new QPushButton(Dialog);
        btn_update->setObjectName(QStringLiteral("btn_update"));
        btn_update->setGeometry(QRect(450, 530, 93, 36));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(16);
        btn_update->setFont(font1);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 568, 168));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral("color: rgb(91, 79, 65);"));

        horizontalLayout_2->addWidget(label_9);

        lbe_update_time = new QLabel(layoutWidget);
        lbe_update_time->setObjectName(QStringLiteral("lbe_update_time"));
        lbe_update_time->setFont(font);

        horizontalLayout_2->addWidget(lbe_update_time);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        horizontalLayout_8->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(566, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(10);
        label_8->setFont(font2);

        horizontalLayout_3->addWidget(label_8);

        lbe_add_confirm = new QLabel(layoutWidget);
        lbe_add_confirm->setObjectName(QStringLiteral("lbe_add_confirm"));
        lbe_add_confirm->setFont(font1);
        lbe_add_confirm->setStyleSheet(QStringLiteral("color: rgb(245, 82, 83);"));

        horizontalLayout_3->addWidget(lbe_add_confirm);


        verticalLayout->addLayout(horizontalLayout_3);

        lbe_total_confirm = new QLabel(layoutWidget);
        lbe_total_confirm->setObjectName(QStringLiteral("lbe_total_confirm"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(24);
        lbe_total_confirm->setFont(font3);
        lbe_total_confirm->setLayoutDirection(Qt::LeftToRight);
        lbe_total_confirm->setStyleSheet(QStringLiteral("color: rgb(245, 82, 83);"));
        lbe_total_confirm->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbe_total_confirm);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font4.setPointSize(15);
        label->setFont(font4);
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 224, 224);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        horizontalLayout_4->addWidget(label_6);

        lbe_add_suspect = new QLabel(layoutWidget);
        lbe_add_suspect->setObjectName(QStringLiteral("lbe_add_suspect"));
        lbe_add_suspect->setFont(font1);
        lbe_add_suspect->setStyleSheet(QStringLiteral("color: rgb(255, 150, 30);"));

        horizontalLayout_4->addWidget(lbe_add_suspect);


        verticalLayout_2->addLayout(horizontalLayout_4);

        lbe_total_suspect = new QLabel(layoutWidget);
        lbe_total_suspect->setObjectName(QStringLiteral("lbe_total_suspect"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbe_total_suspect->sizePolicy().hasHeightForWidth());
        lbe_total_suspect->setSizePolicy(sizePolicy);
        lbe_total_suspect->setFont(font3);
        lbe_total_suspect->setStyleSheet(QLatin1String("color: rgb(255, 150, 30);\n"
""));
        lbe_total_suspect->setTextFormat(Qt::AutoText);
        lbe_total_suspect->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbe_total_suspect);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font4);
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 238, 217);"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout_7->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);

        horizontalLayout_6->addWidget(label_7);

        lbe_add_heal = new QLabel(layoutWidget);
        lbe_add_heal->setObjectName(QStringLiteral("lbe_add_heal"));
        lbe_add_heal->setFont(font1);
        lbe_add_heal->setStyleSheet(QStringLiteral("color: rgb(23, 139, 80);"));

        horizontalLayout_6->addWidget(lbe_add_heal);


        verticalLayout_4->addLayout(horizontalLayout_6);

        lbe_total_heal = new QLabel(layoutWidget);
        lbe_total_heal->setObjectName(QStringLiteral("lbe_total_heal"));
        lbe_total_heal->setFont(font3);
        lbe_total_heal->setStyleSheet(QStringLiteral("color: rgb(23, 139, 80);"));
        lbe_total_heal->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lbe_total_heal);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font4);
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(223, 238, 230);"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);


        horizontalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        horizontalLayout_5->addWidget(label_5);

        lbe_add_dead = new QLabel(layoutWidget);
        lbe_add_dead->setObjectName(QStringLiteral("lbe_add_dead"));
        lbe_add_dead->setFont(font1);
        lbe_add_dead->setStyleSheet(QStringLiteral("color: rgb(102, 102, 108);"));

        horizontalLayout_5->addWidget(lbe_add_dead);


        verticalLayout_3->addLayout(horizontalLayout_5);

        lbe_total_dead = new QLabel(layoutWidget);
        lbe_total_dead->setObjectName(QStringLiteral("lbe_total_dead"));
        lbe_total_dead->setFont(font3);
        lbe_total_dead->setStyleSheet(QStringLiteral("color: rgb(102, 102, 108);"));
        lbe_total_dead->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lbe_total_dead);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font4);
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 238);"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);


        horizontalLayout_7->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_7);

        verticalLayout_5->setStretch(0, 4);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 10);
        widget_1 = new QCustomPlot(Dialog);
        widget_1->setObjectName(QStringLiteral("widget_1"));
        widget_1->setGeometry(QRect(580, 30, 550, 190));
        widget_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(581, -4, 551, 31));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);
        label_10->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        horizontalLayout_12->addWidget(label_10);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_18 = new QLabel(layoutWidget1);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(17, 17));
        label_18->setMaximumSize(QSize(17, 17));
        label_18->setStyleSheet(QStringLiteral("background-color: rgb(0, 93, 255);"));

        horizontalLayout_9->addWidget(label_18);

        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font2);

        horizontalLayout_9->addWidget(label_16);


        horizontalLayout_11->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_19 = new QLabel(layoutWidget1);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(17, 17));
        label_19->setMaximumSize(QSize(17, 17));
        label_19->setStyleSheet(QStringLiteral("background-color: rgb(237, 160, 70);"));

        horizontalLayout_10->addWidget(label_19);

        label_17 = new QLabel(layoutWidget1);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font2);

        horizontalLayout_10->addWidget(label_17);


        horizontalLayout_11->addLayout(horizontalLayout_10);


        horizontalLayout_12->addLayout(horizontalLayout_11);

        widget_3 = new QCustomPlot(Dialog);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(580, 510, 550, 190));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        layoutWidget_2 = new QWidget(Dialog);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(580, 235, 551, 31));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font);
        label_20->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        horizontalLayout_13->addWidget(label_20);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_21 = new QLabel(layoutWidget_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMinimumSize(QSize(17, 17));
        label_21->setMaximumSize(QSize(17, 17));
        label_21->setStyleSheet(QStringLiteral("background-color: rgb(245, 60, 60);"));

        horizontalLayout_15->addWidget(label_21);

        label_22 = new QLabel(layoutWidget_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font2);

        horizontalLayout_15->addWidget(label_22);


        horizontalLayout_14->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_23 = new QLabel(layoutWidget_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setMinimumSize(QSize(17, 17));
        label_23->setMaximumSize(QSize(17, 17));
        label_23->setStyleSheet(QStringLiteral("background-color: rgb(36, 200, 200);"));

        horizontalLayout_16->addWidget(label_23);

        label_24 = new QLabel(layoutWidget_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font2);

        horizontalLayout_16->addWidget(label_24);


        horizontalLayout_14->addLayout(horizontalLayout_16);


        horizontalLayout_13->addLayout(horizontalLayout_14);

        layoutWidget_3 = new QWidget(Dialog);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(580, 475, 551, 31));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(layoutWidget_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font);
        label_25->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        horizontalLayout_17->addWidget(label_25);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_4);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_26 = new QLabel(layoutWidget_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setMinimumSize(QSize(17, 17));
        label_26->setMaximumSize(QSize(17, 17));
        label_26->setStyleSheet(QStringLiteral("background-color: rgb(33,144,5);"));

        horizontalLayout_19->addWidget(label_26);

        label_27 = new QLabel(layoutWidget_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setFont(font2);

        horizontalLayout_19->addWidget(label_27);


        horizontalLayout_18->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_28 = new QLabel(layoutWidget_3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setMinimumSize(QSize(17, 17));
        label_28->setMaximumSize(QSize(17, 17));
        label_28->setStyleSheet(QStringLiteral("background-color: rgb(135, 135, 139);"));

        horizontalLayout_20->addWidget(label_28);

        label_29 = new QLabel(layoutWidget_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setFont(font2);

        horizontalLayout_20->addWidget(label_29);


        horizontalLayout_18->addLayout(horizontalLayout_20);


        horizontalLayout_17->addLayout(horizontalLayout_18);

        tree = new QTreeWidget(Dialog);
        QFont font5;
        font5.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setFont(4, font5);
        __qtreewidgetitem->setFont(3, font5);
        __qtreewidgetitem->setFont(2, font5);
        __qtreewidgetitem->setFont(1, font5);
        __qtreewidgetitem->setFont(0, font5);
        tree->setHeaderItem(__qtreewidgetitem);
        tree->setObjectName(QStringLiteral("tree"));
        tree->setGeometry(QRect(-10, 200, 581, 201));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font6.setPointSize(12);
        tree->setFont(font6);
        tree->setStyleSheet(QStringLiteral(""));
        tree->setLineWidth(2);
        tree->setSortingEnabled(true);
        tree->header()->setVisible(true);
        tree->header()->setCascadingSectionResizes(false);
        tree->header()->setHighlightSections(false);
        tree->header()->setProperty("showSortIndicator", QVariant(true));
        label_30 = new QLabel(Dialog);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(20, 540, 204, 24));
        label_30->setFont(font);
        label_30->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        tb_news = new QTextBrowser(Dialog);
        tb_news->setObjectName(QStringLiteral("tb_news"));
        tb_news->setGeometry(QRect(10, 580, 541, 91));
        label_31 = new QLabel(Dialog);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(20, 180, 204, 24));
        label_31->setFont(font);
        label_31->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        widget_2 = new QCustomPlot(Dialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(580, 270, 550, 190));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        label_32 = new QLabel(Dialog);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(0, 400, 204, 24));
        label_32->setFont(font);
        label_32->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        tree_2 = new QTreeWidget(Dialog);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setFont(3, font5);
        __qtreewidgetitem1->setFont(2, font5);
        __qtreewidgetitem1->setFont(1, font5);
        __qtreewidgetitem1->setFont(0, font5);
        tree_2->setHeaderItem(__qtreewidgetitem1);
        tree_2->setObjectName(QStringLiteral("tree_2"));
        tree_2->setGeometry(QRect(10, 430, 571, 101));
        tree_2->setFont(font6);
        tree_2->setStyleSheet(QStringLiteral(""));
        tree_2->setLineWidth(2);
        tree_2->setSortingEnabled(true);
        tree_2->header()->setVisible(true);
        tree_2->header()->setCascadingSectionResizes(false);
        tree_2->header()->setHighlightSections(false);
        tree_2->header()->setProperty("showSortIndicator", QVariant(true));
        layoutWidget->raise();
        btn_update->raise();
        layoutWidget->raise();
        widget_1->raise();
        widget_3->raise();
        layoutWidget_2->raise();
        layoutWidget_3->raise();
        tree->raise();
        label_30->raise();
        tb_news->raise();
        label_31->raise();
        widget_2->raise();
        label_32->raise();
        tree_2->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        btn_update->setText(QApplication::translate("Dialog", "\346\233\264\346\226\260", Q_NULLPTR));
        label_9->setText(QApplication::translate("Dialog", "\347\273\237\350\256\241\346\210\252\346\255\242\344\272\216", Q_NULLPTR));
        lbe_update_time->setText(QApplication::translate("Dialog", "2020-02-05 16:56:23", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog", "\350\276\203\344\270\212\346\227\245", Q_NULLPTR));
        lbe_add_confirm->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        lbe_total_confirm->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "\347\241\256\350\257\212", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "\350\276\203\344\270\212\346\227\245", Q_NULLPTR));
        lbe_add_suspect->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        lbe_total_suspect->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "\347\226\221\344\274\274", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog", "\350\276\203\344\270\212\346\227\245", Q_NULLPTR));
        lbe_add_heal->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        lbe_total_heal->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "\346\262\273\346\204\210", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "\350\276\203\344\270\212\346\227\245", Q_NULLPTR));
        lbe_add_dead->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        lbe_total_dead->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "\346\255\273\344\272\241", Q_NULLPTR));
        label_10->setText(QApplication::translate("Dialog", "\346\226\260\345\242\236\347\226\221\344\274\274/\347\241\256\350\257\212\350\266\213\345\212\277", Q_NULLPTR));
        label_18->setText(QString());
        label_16->setText(QApplication::translate("Dialog", "\346\226\260\345\242\236\347\241\256\350\257\212", Q_NULLPTR));
        label_19->setText(QString());
        label_17->setText(QApplication::translate("Dialog", "\346\226\260\345\242\236\347\226\221\344\274\274", Q_NULLPTR));
        label_20->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\347\226\221\344\274\274/\347\241\256\350\257\212\350\266\213\345\212\277", Q_NULLPTR));
        label_21->setText(QString());
        label_22->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\347\241\256\350\257\212", Q_NULLPTR));
        label_23->setText(QString());
        label_24->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\347\226\221\344\274\274", Q_NULLPTR));
        label_25->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\346\262\273\346\204\210/\346\255\273\344\272\241\350\266\213\345\212\277", Q_NULLPTR));
        label_26->setText(QString());
        label_27->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\346\262\273\346\204\210", Q_NULLPTR));
        label_28->setText(QString());
        label_29->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\346\255\273\344\272\241", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = tree->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("Dialog", "\346\255\273\344\272\241", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("Dialog", "\346\262\273\346\204\210", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("Dialog", "\347\264\257\350\256\241\347\241\256\350\257\212", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("Dialog", "\346\226\260\345\242\236\347\241\256\350\257\212", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("Dialog", "\347\234\201\345\270\202", Q_NULLPTR));
        label_30->setText(QApplication::translate("Dialog", "\346\234\200\346\226\260\345\212\250\346\200\201", Q_NULLPTR));
        label_31->setText(QApplication::translate("Dialog", "\344\270\255\345\233\275\347\226\253\346\203\205", Q_NULLPTR));
        label_32->setText(QApplication::translate("Dialog", "\346\265\267\345\244\226\347\226\253\346\203\205", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = tree_2->headerItem();
        ___qtreewidgetitem1->setText(3, QApplication::translate("Dialog", "\346\255\273\344\272\241", Q_NULLPTR));
        ___qtreewidgetitem1->setText(2, QApplication::translate("Dialog", "\346\262\273\346\204\210", Q_NULLPTR));
        ___qtreewidgetitem1->setText(1, QApplication::translate("Dialog", "\347\241\256\350\257\212", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("Dialog", "\345\233\275\345\256\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
