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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_10;
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
    QLabel *lbe_confirm;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *lbe_add_suspect;
    QLabel *lbe_total_suspect;
    QLabel *lbe_suspect;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *lbe_add_heal;
    QLabel *lbe_total_heal;
    QLabel *lbe_heal;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *lbe_add_dead;
    QLabel *lbe_total_dead;
    QLabel *lbe_dead;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_31;
    QLabel *label_33;
    QSpacerItem *horizontalSpacer_2;
    QTreeWidget *tree;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_32;
    QLabel *lbe_countryTotal;
    QSpacerItem *horizontalSpacer_3;
    QTreeWidget *tree_2;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_21;
    QLabel *lbe_chart_name;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_22;
    QHBoxLayout *horizontalLayout_23;
    QLabel *lbe_chart_line1_clr;
    QLabel *lbe_chart_line1_name;
    QHBoxLayout *horizontalLayout_24;
    QLabel *lbe_chart_line2_clr;
    QLabel *lbe_chart_line2_name;
    QCustomPlot *widget_chart;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rb0_add;
    QRadioButton *rb1_total_CfmSpt;
    QRadioButton *rb2_toal_HealDead;
    QRadioButton *rb3_rate;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_30;
    QPushButton *btn_update;
    QTextBrowser *tb_news;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *btn_about;
    QButtonGroup *rb_group;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1180, 563);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        Dialog->setFont(font);
        Dialog->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        horizontalLayout_12 = new QHBoxLayout(Dialog);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral("color: rgb(91, 79, 65);"));

        horizontalLayout_2->addWidget(label_9);

        lbe_update_time = new QLabel(Dialog);
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
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(10);
        label_8->setFont(font1);

        horizontalLayout_3->addWidget(label_8);

        lbe_add_confirm = new QLabel(Dialog);
        lbe_add_confirm->setObjectName(QStringLiteral("lbe_add_confirm"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(16);
        lbe_add_confirm->setFont(font2);
        lbe_add_confirm->setStyleSheet(QStringLiteral("color: rgb(245, 82, 83);"));

        horizontalLayout_3->addWidget(lbe_add_confirm);


        verticalLayout->addLayout(horizontalLayout_3);

        lbe_total_confirm = new QLabel(Dialog);
        lbe_total_confirm->setObjectName(QStringLiteral("lbe_total_confirm"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(26);
        font3.setBold(true);
        font3.setWeight(75);
        lbe_total_confirm->setFont(font3);
        lbe_total_confirm->setLayoutDirection(Qt::LeftToRight);
        lbe_total_confirm->setStyleSheet(QStringLiteral("color: rgb(245, 82, 83);"));
        lbe_total_confirm->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbe_total_confirm);

        lbe_confirm = new QLabel(Dialog);
        lbe_confirm->setObjectName(QStringLiteral("lbe_confirm"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font4.setPointSize(15);
        lbe_confirm->setFont(font4);
        lbe_confirm->setStyleSheet(QStringLiteral("background-color: rgb(255, 224, 224);"));
        lbe_confirm->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbe_confirm);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        horizontalLayout_4->addWidget(label_6);

        lbe_add_suspect = new QLabel(Dialog);
        lbe_add_suspect->setObjectName(QStringLiteral("lbe_add_suspect"));
        lbe_add_suspect->setFont(font2);
        lbe_add_suspect->setStyleSheet(QStringLiteral("color: rgb(255, 150, 30);"));

        horizontalLayout_4->addWidget(lbe_add_suspect);


        verticalLayout_2->addLayout(horizontalLayout_4);

        lbe_total_suspect = new QLabel(Dialog);
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

        lbe_suspect = new QLabel(Dialog);
        lbe_suspect->setObjectName(QStringLiteral("lbe_suspect"));
        lbe_suspect->setFont(font4);
        lbe_suspect->setStyleSheet(QStringLiteral("background-color: rgb(255, 238, 217);"));
        lbe_suspect->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbe_suspect);


        horizontalLayout_7->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        horizontalLayout_6->addWidget(label_7);

        lbe_add_heal = new QLabel(Dialog);
        lbe_add_heal->setObjectName(QStringLiteral("lbe_add_heal"));
        lbe_add_heal->setFont(font2);
        lbe_add_heal->setStyleSheet(QStringLiteral("color: rgb(23, 139, 80);"));

        horizontalLayout_6->addWidget(lbe_add_heal);


        verticalLayout_4->addLayout(horizontalLayout_6);

        lbe_total_heal = new QLabel(Dialog);
        lbe_total_heal->setObjectName(QStringLiteral("lbe_total_heal"));
        lbe_total_heal->setFont(font3);
        lbe_total_heal->setStyleSheet(QStringLiteral("color: rgb(23, 139, 80);"));
        lbe_total_heal->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lbe_total_heal);

        lbe_heal = new QLabel(Dialog);
        lbe_heal->setObjectName(QStringLiteral("lbe_heal"));
        lbe_heal->setFont(font4);
        lbe_heal->setStyleSheet(QStringLiteral("background-color: rgb(223, 238, 230);"));
        lbe_heal->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lbe_heal);


        horizontalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        horizontalLayout_5->addWidget(label_5);

        lbe_add_dead = new QLabel(Dialog);
        lbe_add_dead->setObjectName(QStringLiteral("lbe_add_dead"));
        lbe_add_dead->setFont(font2);
        lbe_add_dead->setStyleSheet(QStringLiteral("color: rgb(102, 102, 108);"));

        horizontalLayout_5->addWidget(lbe_add_dead);


        verticalLayout_3->addLayout(horizontalLayout_5);

        lbe_total_dead = new QLabel(Dialog);
        lbe_total_dead->setObjectName(QStringLiteral("lbe_total_dead"));
        lbe_total_dead->setFont(font3);
        lbe_total_dead->setStyleSheet(QStringLiteral("color: rgb(102, 102, 108);"));
        lbe_total_dead->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lbe_total_dead);

        lbe_dead = new QLabel(Dialog);
        lbe_dead->setObjectName(QStringLiteral("lbe_dead"));
        lbe_dead->setFont(font4);
        lbe_dead->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 238);"));
        lbe_dead->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lbe_dead);


        horizontalLayout_7->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_7);

        verticalLayout_5->setStretch(0, 4);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 10);

        verticalLayout_10->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_31 = new QLabel(Dialog);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setFont(font);
        label_31->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        horizontalLayout_10->addWidget(label_31);

        label_33 = new QLabel(Dialog);
        label_33->setObjectName(QStringLiteral("label_33"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font5.setPointSize(9);
        label_33->setFont(font5);
        label_33->setStyleSheet(QStringLiteral(""));

        horizontalLayout_10->addWidget(label_33);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_10);

        tree = new QTreeWidget(Dialog);
        QFont font6;
        font6.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setFont(4, font6);
        __qtreewidgetitem->setFont(3, font6);
        __qtreewidgetitem->setFont(2, font6);
        __qtreewidgetitem->setFont(1, font6);
        __qtreewidgetitem->setFont(0, font6);
        tree->setHeaderItem(__qtreewidgetitem);
        tree->setObjectName(QStringLiteral("tree"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font7.setPointSize(12);
        tree->setFont(font7);
        tree->setStyleSheet(QStringLiteral(""));
        tree->setLineWidth(2);
        tree->setSortingEnabled(true);
        tree->header()->setVisible(true);
        tree->header()->setCascadingSectionResizes(false);
        tree->header()->setHighlightSections(false);
        tree->header()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout_6->addWidget(tree);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_32 = new QLabel(Dialog);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setFont(font);
        label_32->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        horizontalLayout_9->addWidget(label_32);

        lbe_countryTotal = new QLabel(Dialog);
        lbe_countryTotal->setObjectName(QStringLiteral("lbe_countryTotal"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font8.setPointSize(13);
        lbe_countryTotal->setFont(font8);
        lbe_countryTotal->setStyleSheet(QStringLiteral(""));

        horizontalLayout_9->addWidget(lbe_countryTotal);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_9);

        tree_2 = new QTreeWidget(Dialog);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setFont(3, font6);
        __qtreewidgetitem1->setFont(2, font6);
        __qtreewidgetitem1->setFont(1, font6);
        __qtreewidgetitem1->setFont(0, font6);
        tree_2->setHeaderItem(__qtreewidgetitem1);
        tree_2->setObjectName(QStringLiteral("tree_2"));
        tree_2->setFont(font7);
        tree_2->setStyleSheet(QStringLiteral(""));
        tree_2->setLineWidth(2);
        tree_2->setSortingEnabled(true);
        tree_2->header()->setVisible(true);
        tree_2->header()->setCascadingSectionResizes(false);
        tree_2->header()->setHighlightSections(false);
        tree_2->header()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout_6->addWidget(tree_2);


        verticalLayout_10->addLayout(verticalLayout_6);

        verticalLayout_10->setStretch(0, 1);
        verticalLayout_10->setStretch(1, 4);

        horizontalLayout_12->addLayout(verticalLayout_10);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        lbe_chart_name = new QLabel(Dialog);
        lbe_chart_name->setObjectName(QStringLiteral("lbe_chart_name"));
        lbe_chart_name->setFont(font);
        lbe_chart_name->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        horizontalLayout_21->addWidget(lbe_chart_name);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_5);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        lbe_chart_line1_clr = new QLabel(Dialog);
        lbe_chart_line1_clr->setObjectName(QStringLiteral("lbe_chart_line1_clr"));
        lbe_chart_line1_clr->setMinimumSize(QSize(17, 17));
        lbe_chart_line1_clr->setMaximumSize(QSize(17, 17));
        lbe_chart_line1_clr->setStyleSheet(QStringLiteral("background-color: rgb(33,144,5);"));

        horizontalLayout_23->addWidget(lbe_chart_line1_clr);

        lbe_chart_line1_name = new QLabel(Dialog);
        lbe_chart_line1_name->setObjectName(QStringLiteral("lbe_chart_line1_name"));
        lbe_chart_line1_name->setFont(font1);

        horizontalLayout_23->addWidget(lbe_chart_line1_name);


        horizontalLayout_22->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        lbe_chart_line2_clr = new QLabel(Dialog);
        lbe_chart_line2_clr->setObjectName(QStringLiteral("lbe_chart_line2_clr"));
        lbe_chart_line2_clr->setMinimumSize(QSize(17, 17));
        lbe_chart_line2_clr->setMaximumSize(QSize(17, 17));
        lbe_chart_line2_clr->setStyleSheet(QStringLiteral("background-color: rgb(135, 135, 139);"));

        horizontalLayout_24->addWidget(lbe_chart_line2_clr);

        lbe_chart_line2_name = new QLabel(Dialog);
        lbe_chart_line2_name->setObjectName(QStringLiteral("lbe_chart_line2_name"));
        lbe_chart_line2_name->setFont(font1);

        horizontalLayout_24->addWidget(lbe_chart_line2_name);


        horizontalLayout_22->addLayout(horizontalLayout_24);


        horizontalLayout_21->addLayout(horizontalLayout_22);


        verticalLayout_7->addLayout(horizontalLayout_21);

        widget_chart = new QCustomPlot(Dialog);
        widget_chart->setObjectName(QStringLiteral("widget_chart"));
        widget_chart->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        verticalLayout_7->addWidget(widget_chart);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rb0_add = new QRadioButton(Dialog);
        rb_group = new QButtonGroup(Dialog);
        rb_group->setObjectName(QStringLiteral("rb_group"));
        rb_group->addButton(rb0_add);
        rb0_add->setObjectName(QStringLiteral("rb0_add"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rb0_add->sizePolicy().hasHeightForWidth());
        rb0_add->setSizePolicy(sizePolicy1);
        rb0_add->setFont(font7);
        rb0_add->setInputMethodHints(Qt::ImhMultiLine);

        horizontalLayout->addWidget(rb0_add);

        rb1_total_CfmSpt = new QRadioButton(Dialog);
        rb_group->addButton(rb1_total_CfmSpt);
        rb1_total_CfmSpt->setObjectName(QStringLiteral("rb1_total_CfmSpt"));
        sizePolicy1.setHeightForWidth(rb1_total_CfmSpt->sizePolicy().hasHeightForWidth());
        rb1_total_CfmSpt->setSizePolicy(sizePolicy1);
        rb1_total_CfmSpt->setFont(font7);
        rb1_total_CfmSpt->setInputMethodHints(Qt::ImhMultiLine);

        horizontalLayout->addWidget(rb1_total_CfmSpt);

        rb2_toal_HealDead = new QRadioButton(Dialog);
        rb_group->addButton(rb2_toal_HealDead);
        rb2_toal_HealDead->setObjectName(QStringLiteral("rb2_toal_HealDead"));
        sizePolicy1.setHeightForWidth(rb2_toal_HealDead->sizePolicy().hasHeightForWidth());
        rb2_toal_HealDead->setSizePolicy(sizePolicy1);
        rb2_toal_HealDead->setFont(font7);
        rb2_toal_HealDead->setInputMethodHints(Qt::ImhMultiLine);

        horizontalLayout->addWidget(rb2_toal_HealDead);

        rb3_rate = new QRadioButton(Dialog);
        rb_group->addButton(rb3_rate);
        rb3_rate->setObjectName(QStringLiteral("rb3_rate"));
        sizePolicy1.setHeightForWidth(rb3_rate->sizePolicy().hasHeightForWidth());
        rb3_rate->setSizePolicy(sizePolicy1);
        rb3_rate->setFont(font7);
        rb3_rate->setInputMethodHints(Qt::ImhMultiLine);

        horizontalLayout->addWidget(rb3_rate);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 10);
        verticalLayout_7->setStretch(2, 1);

        verticalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_30 = new QLabel(Dialog);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setFont(font);
        label_30->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        horizontalLayout_11->addWidget(label_30);

        btn_update = new QPushButton(Dialog);
        btn_update->setObjectName(QStringLiteral("btn_update"));
        btn_update->setFont(font2);

        horizontalLayout_11->addWidget(btn_update);


        verticalLayout_8->addLayout(horizontalLayout_11);

        tb_news = new QTextBrowser(Dialog);
        tb_news->setObjectName(QStringLiteral("tb_news"));
        QFont font9;
        font9.setFamily(QStringLiteral("Microsoft YaHei"));
        font9.setPointSize(12);
        tb_news->setFont(font9);

        verticalLayout_8->addWidget(tb_news);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font7);

        horizontalLayout_14->addWidget(pushButton);

        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font7);

        horizontalLayout_14->addWidget(pushButton_3);

        btn_about = new QPushButton(Dialog);
        btn_about->setObjectName(QStringLiteral("btn_about"));
        btn_about->setFont(font7);

        horizontalLayout_14->addWidget(btn_about);


        verticalLayout_8->addLayout(horizontalLayout_14);


        verticalLayout_9->addLayout(verticalLayout_8);

        verticalLayout_9->setStretch(0, 10);
        verticalLayout_9->setStretch(1, 6);

        horizontalLayout_12->addLayout(verticalLayout_9);

        horizontalLayout_12->setStretch(0, 6);
        horizontalLayout_12->setStretch(1, 1);
        btn_update->raise();
        label_30->raise();
        tb_news->raise();
        widget_chart->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label_9->setText(QApplication::translate("Dialog", "\347\273\237\350\256\241\346\210\252\346\255\242\344\272\216", Q_NULLPTR));
        lbe_update_time->setText(QApplication::translate("Dialog", "2020-02-05 16:56:23", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog", "\350\276\203\344\270\212\346\227\245", Q_NULLPTR));
        lbe_add_confirm->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        lbe_total_confirm->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        lbe_confirm->setText(QApplication::translate("Dialog", "\347\241\256\350\257\212", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "\350\276\203\344\270\212\346\227\245", Q_NULLPTR));
        lbe_add_suspect->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        lbe_total_suspect->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        lbe_suspect->setText(QApplication::translate("Dialog", "\347\226\221\344\274\274", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog", "\350\276\203\344\270\212\346\227\245", Q_NULLPTR));
        lbe_add_heal->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        lbe_total_heal->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        lbe_heal->setText(QApplication::translate("Dialog", "\346\262\273\346\204\210", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "\350\276\203\344\270\212\346\227\245", Q_NULLPTR));
        lbe_add_dead->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        lbe_total_dead->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        lbe_dead->setText(QApplication::translate("Dialog", "\346\255\273\344\272\241", Q_NULLPTR));
        label_31->setText(QApplication::translate("Dialog", "\344\270\255\345\233\275\347\226\253\346\203\205", Q_NULLPTR));
        label_33->setText(QApplication::translate("Dialog", "(7:00-10:00\344\270\272\346\233\264\346\226\260\351\253\230\345\263\260,\346\225\260\346\215\256\345\246\202\346\234\211\346\273\236\345\220\216\350\257\267\350\260\205\350\247\243)", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = tree->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("Dialog", "\346\255\273\344\272\241", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("Dialog", "\346\262\273\346\204\210", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("Dialog", "\347\264\257\350\256\241\347\241\256\350\257\212", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("Dialog", "\346\226\260\345\242\236\347\241\256\350\257\212", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("Dialog", "\347\234\201\345\270\202", Q_NULLPTR));
        label_32->setText(QApplication::translate("Dialog", "\346\265\267\345\244\226\347\226\253\346\203\205", Q_NULLPTR));
        lbe_countryTotal->setText(QApplication::translate("Dialog", "\347\241\256\350\257\212234\344\276\213,\346\255\273\344\272\24110\344\276\213", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = tree_2->headerItem();
        ___qtreewidgetitem1->setText(3, QApplication::translate("Dialog", "\346\255\273\344\272\241", Q_NULLPTR));
        ___qtreewidgetitem1->setText(2, QApplication::translate("Dialog", "\346\262\273\346\204\210", Q_NULLPTR));
        ___qtreewidgetitem1->setText(1, QApplication::translate("Dialog", "\347\241\256\350\257\212", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("Dialog", "\345\233\275\345\256\266", Q_NULLPTR));
        lbe_chart_name->setText(QApplication::translate("Dialog", "\345\233\276\345\220\215\347\247\260", Q_NULLPTR));
        lbe_chart_line1_clr->setText(QString());
        lbe_chart_line1_name->setText(QApplication::translate("Dialog", "\346\233\262\347\272\2771", Q_NULLPTR));
        lbe_chart_line2_clr->setText(QString());
        lbe_chart_line2_name->setText(QApplication::translate("Dialog", "\346\233\262\347\272\2772", Q_NULLPTR));
        rb0_add->setText(QApplication::translate("Dialog", "\345\205\250\345\233\275\347\226\253\346\203\205\n"
"\346\226\260\345\242\236\350\266\213\345\212\277", Q_NULLPTR));
        rb1_total_CfmSpt->setText(QApplication::translate("Dialog", "\345\205\250\345\233\275\347\264\257\350\256\241\n"
"\347\241\256\350\257\212/\347\226\221\344\274\274", Q_NULLPTR));
        rb2_toal_HealDead->setText(QApplication::translate("Dialog", "\345\205\250\345\233\275\347\264\257\350\256\241\n"
"\346\262\273\346\204\210/\346\255\273\344\272\241", Q_NULLPTR));
        rb3_rate->setText(QApplication::translate("Dialog", "\346\262\273\346\204\210\347\216\207\n"
"\347\227\205\346\255\273\347\216\207", Q_NULLPTR));
        label_30->setText(QApplication::translate("Dialog", "\346\234\200\346\226\260\345\212\250\346\200\201", Q_NULLPTR));
        btn_update->setText(QApplication::translate("Dialog", "\346\233\264\346\226\260", Q_NULLPTR));
        tb_news->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt; font-weight:600; color:#424242;\">2020-02-10 13:21:29</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9pt; color:#8c8c8c;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-weight:600;\">\302\267\344\270\212\346\265\267\346\226\260\345\242"
                        "\2364\344\276\213\346\226\260\345\206\240\350\202\272\347\202\216\347\241\256\350\257\212\347\227\205\344\276\213</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt; color:#6c6c6c;\">   \344\273\212\346\227\2450-12\346\227\266\357\274\214\344\270\212\346\265\267\346\226\260\345\242\236\346\226\260\345\236\213\345\206\240\347\212\266\347\227\205\346\257\222\346\204\237\346\237\223\347\232\204\350\202\272\347\202\216\347\241\256\350\257\212\347\227\205\344\276\2134\344\276\213\357\274\214\345\235\207\344\270\272\346\234\254\345\270\202\345\270\270\344\275\217\344\272\272\345\217\243\357\274\233\345\205\250\345\270\202\347\264\257\350\256\241\347\241\256\350\257\212299\344\276\213\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-siz"
                        "e:9pt; color:#6c6c6c;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:10pt; font-weight:600; color:#000000;\">\344\277\241\346\201\257\346\235\245\346\272\220:</span><a href=\"https://view.inews.qq.com/a/20200210A0B3GH00\"><span style=\" font-family:'SimSun'; font-size:9pt; font-weight:600; text-decoration: underline; color:#0000ff;\">\345\201\245\345\272\267\344\270\212\346\265\267</span></a></p>\n"
"<hr /></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "\350\276\237\350\260\243\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Dialog", "\346\243\200\346\237\245\346\233\264\346\226\260", Q_NULLPTR));
        btn_about->setText(QApplication::translate("Dialog", "\345\205\263\344\272\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
