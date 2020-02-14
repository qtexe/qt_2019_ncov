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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
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
    QLabel *lbe_pic;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLabel *lbe_update_time;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
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
    QFrame *line_2;
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
    QPushButton *btn_line_0;
    QPushButton *btn_line_1;
    QPushButton *btn_line_2;
    QPushButton *btn_line_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_30;
    QSpacerItem *horizontalSpacer_6;
    QTextBrowser *tb_news;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *btn_rumor;
    QPushButton *btn_update;
    QPushButton *btn_about;
    QPushButton *btn_chkUpdate;
    QButtonGroup *btn_group;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1130, 645);
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
        lbe_pic = new QLabel(Dialog);
        lbe_pic->setObjectName(QStringLiteral("lbe_pic"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbe_pic->sizePolicy().hasHeightForWidth());
        lbe_pic->setSizePolicy(sizePolicy);
        lbe_pic->setMinimumSize(QSize(0, 194));
        lbe_pic->setStyleSheet(QStringLiteral("background-image: url(:/top_headv3.jpg);"));
        lbe_pic->setScaledContents(true);
        lbe_pic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_10->addWidget(lbe_pic);

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
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(12);
        label_9->setFont(font1);
        label_9->setStyleSheet(QStringLiteral("color: rgb(91, 79, 65);"));

        horizontalLayout_2->addWidget(label_9);

        lbe_update_time = new QLabel(Dialog);
        lbe_update_time->setObjectName(QStringLiteral("lbe_update_time"));
        lbe_update_time->setFont(font1);

        horizontalLayout_2->addWidget(lbe_update_time);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        horizontalLayout_8->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_8);

        line = new QFrame(Dialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

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
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(10);
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_8);

        lbe_add_confirm = new QLabel(Dialog);
        lbe_add_confirm->setObjectName(QStringLiteral("lbe_add_confirm"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(16);
        lbe_add_confirm->setFont(font3);
        lbe_add_confirm->setStyleSheet(QStringLiteral("color: rgb(245, 82, 83);"));

        horizontalLayout_3->addWidget(lbe_add_confirm);


        verticalLayout->addLayout(horizontalLayout_3);

        lbe_total_confirm = new QLabel(Dialog);
        lbe_total_confirm->setObjectName(QStringLiteral("lbe_total_confirm"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font4.setPointSize(26);
        font4.setBold(true);
        font4.setWeight(75);
        lbe_total_confirm->setFont(font4);
        lbe_total_confirm->setLayoutDirection(Qt::LeftToRight);
        lbe_total_confirm->setStyleSheet(QStringLiteral("color: rgb(245, 82, 83);"));
        lbe_total_confirm->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbe_total_confirm);

        lbe_confirm = new QLabel(Dialog);
        lbe_confirm->setObjectName(QStringLiteral("lbe_confirm"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font5.setPointSize(15);
        lbe_confirm->setFont(font5);
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
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_6);

        lbe_add_suspect = new QLabel(Dialog);
        lbe_add_suspect->setObjectName(QStringLiteral("lbe_add_suspect"));
        lbe_add_suspect->setFont(font3);
        lbe_add_suspect->setStyleSheet(QStringLiteral("color: rgb(255, 150, 30);"));

        horizontalLayout_4->addWidget(lbe_add_suspect);


        verticalLayout_2->addLayout(horizontalLayout_4);

        lbe_total_suspect = new QLabel(Dialog);
        lbe_total_suspect->setObjectName(QStringLiteral("lbe_total_suspect"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbe_total_suspect->sizePolicy().hasHeightForWidth());
        lbe_total_suspect->setSizePolicy(sizePolicy1);
        lbe_total_suspect->setFont(font4);
        lbe_total_suspect->setStyleSheet(QLatin1String("color: rgb(255, 150, 30);\n"
""));
        lbe_total_suspect->setTextFormat(Qt::AutoText);
        lbe_total_suspect->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbe_total_suspect);

        lbe_suspect = new QLabel(Dialog);
        lbe_suspect->setObjectName(QStringLiteral("lbe_suspect"));
        lbe_suspect->setFont(font5);
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
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_7);

        lbe_add_heal = new QLabel(Dialog);
        lbe_add_heal->setObjectName(QStringLiteral("lbe_add_heal"));
        lbe_add_heal->setFont(font3);
        lbe_add_heal->setStyleSheet(QStringLiteral("color: rgb(23, 139, 80);"));

        horizontalLayout_6->addWidget(lbe_add_heal);


        verticalLayout_4->addLayout(horizontalLayout_6);

        lbe_total_heal = new QLabel(Dialog);
        lbe_total_heal->setObjectName(QStringLiteral("lbe_total_heal"));
        lbe_total_heal->setFont(font4);
        lbe_total_heal->setStyleSheet(QStringLiteral("color: rgb(23, 139, 80);"));
        lbe_total_heal->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lbe_total_heal);

        lbe_heal = new QLabel(Dialog);
        lbe_heal->setObjectName(QStringLiteral("lbe_heal"));
        lbe_heal->setFont(font5);
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
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        lbe_add_dead = new QLabel(Dialog);
        lbe_add_dead->setObjectName(QStringLiteral("lbe_add_dead"));
        lbe_add_dead->setFont(font3);
        lbe_add_dead->setStyleSheet(QStringLiteral("color: rgb(102, 102, 108);"));

        horizontalLayout_5->addWidget(lbe_add_dead);


        verticalLayout_3->addLayout(horizontalLayout_5);

        lbe_total_dead = new QLabel(Dialog);
        lbe_total_dead->setObjectName(QStringLiteral("lbe_total_dead"));
        lbe_total_dead->setFont(font4);
        lbe_total_dead->setStyleSheet(QStringLiteral("color: rgb(102, 102, 108);"));
        lbe_total_dead->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lbe_total_dead);

        lbe_dead = new QLabel(Dialog);
        lbe_dead->setObjectName(QStringLiteral("lbe_dead"));
        lbe_dead->setFont(font5);
        lbe_dead->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 238);"));
        lbe_dead->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lbe_dead);


        horizontalLayout_7->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_7);

        verticalLayout_5->setStretch(0, 4);
        verticalLayout_5->setStretch(2, 10);

        verticalLayout_10->addLayout(verticalLayout_5);

        line_2 = new QFrame(Dialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_31 = new QLabel(Dialog);
        label_31->setObjectName(QStringLiteral("label_31"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font6.setPointSize(13);
        label_31->setFont(font6);
        label_31->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        horizontalLayout_10->addWidget(label_31);

        label_33 = new QLabel(Dialog);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setFont(font2);
        label_33->setStyleSheet(QStringLiteral(""));

        horizontalLayout_10->addWidget(label_33);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_10);

        tree = new QTreeWidget(Dialog);
        QFont font7;
        font7.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font7.setPointSize(12);
        font7.setBold(true);
        font7.setWeight(75);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setFont(4, font7);
        __qtreewidgetitem->setFont(3, font7);
        __qtreewidgetitem->setFont(2, font7);
        __qtreewidgetitem->setFont(1, font7);
        __qtreewidgetitem->setFont(0, font7);
        tree->setHeaderItem(__qtreewidgetitem);
        tree->setObjectName(QStringLiteral("tree"));
        tree->setFont(font1);
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
        label_32->setFont(font6);
        label_32->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        horizontalLayout_9->addWidget(label_32);

        lbe_countryTotal = new QLabel(Dialog);
        lbe_countryTotal->setObjectName(QStringLiteral("lbe_countryTotal"));
        lbe_countryTotal->setFont(font2);
        lbe_countryTotal->setStyleSheet(QStringLiteral(""));

        horizontalLayout_9->addWidget(lbe_countryTotal);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_9);

        tree_2 = new QTreeWidget(Dialog);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setFont(3, font7);
        __qtreewidgetitem1->setFont(2, font7);
        __qtreewidgetitem1->setFont(1, font7);
        __qtreewidgetitem1->setFont(0, font7);
        tree_2->setHeaderItem(__qtreewidgetitem1);
        tree_2->setObjectName(QStringLiteral("tree_2"));
        tree_2->setFont(font1);
        tree_2->setStyleSheet(QStringLiteral(""));
        tree_2->setLineWidth(2);
        tree_2->setSortingEnabled(true);
        tree_2->header()->setVisible(true);
        tree_2->header()->setCascadingSectionResizes(true);
        tree_2->header()->setHighlightSections(true);
        tree_2->header()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout_6->addWidget(tree_2);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 8);
        verticalLayout_6->setStretch(2, 1);
        verticalLayout_6->setStretch(3, 3);

        verticalLayout_10->addLayout(verticalLayout_6);

        verticalLayout_10->setStretch(0, 1);
        verticalLayout_10->setStretch(1, 60);
        verticalLayout_10->setStretch(3, 100);

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
        lbe_chart_name->setFont(font6);
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
        lbe_chart_line1_name->setFont(font2);

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
        lbe_chart_line2_name->setFont(font2);

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
        btn_line_0 = new QPushButton(Dialog);
        btn_group = new QButtonGroup(Dialog);
        btn_group->setObjectName(QStringLiteral("btn_group"));
        btn_group->addButton(btn_line_0);
        btn_line_0->setObjectName(QStringLiteral("btn_line_0"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_line_0->sizePolicy().hasHeightForWidth());
        btn_line_0->setSizePolicy(sizePolicy2);
        btn_line_0->setMinimumSize(QSize(130, 60));
        btn_line_0->setMaximumSize(QSize(130, 60));
        btn_line_0->setFont(font1);
        btn_line_0->setStyleSheet(QLatin1String("border:2px groove rgb(126, 126, 126);\n"
"border-radius:8px;\n"
"background-color: rgb(243, 246, 248);"));

        horizontalLayout->addWidget(btn_line_0);

        btn_line_1 = new QPushButton(Dialog);
        btn_group->addButton(btn_line_1);
        btn_line_1->setObjectName(QStringLiteral("btn_line_1"));
        sizePolicy2.setHeightForWidth(btn_line_1->sizePolicy().hasHeightForWidth());
        btn_line_1->setSizePolicy(sizePolicy2);
        btn_line_1->setMinimumSize(QSize(130, 60));
        btn_line_1->setMaximumSize(QSize(130, 60));
        btn_line_1->setFont(font1);
        btn_line_1->setStyleSheet(QLatin1String("border:2px groove rgb(126, 126, 126);\n"
"border-radius:8px;\n"
"background-color: rgb(243, 246, 248);"));

        horizontalLayout->addWidget(btn_line_1);

        btn_line_2 = new QPushButton(Dialog);
        btn_group->addButton(btn_line_2);
        btn_line_2->setObjectName(QStringLiteral("btn_line_2"));
        sizePolicy2.setHeightForWidth(btn_line_2->sizePolicy().hasHeightForWidth());
        btn_line_2->setSizePolicy(sizePolicy2);
        btn_line_2->setMinimumSize(QSize(130, 60));
        btn_line_2->setMaximumSize(QSize(130, 60));
        btn_line_2->setFont(font1);
        btn_line_2->setStyleSheet(QLatin1String("border:2px groove rgb(126, 126, 126);\n"
"border-radius:8px;\n"
"background-color: rgb(243, 246, 248);"));

        horizontalLayout->addWidget(btn_line_2);

        btn_line_3 = new QPushButton(Dialog);
        btn_group->addButton(btn_line_3);
        btn_line_3->setObjectName(QStringLiteral("btn_line_3"));
        sizePolicy2.setHeightForWidth(btn_line_3->sizePolicy().hasHeightForWidth());
        btn_line_3->setSizePolicy(sizePolicy2);
        btn_line_3->setMinimumSize(QSize(130, 60));
        btn_line_3->setMaximumSize(QSize(130, 60));
        btn_line_3->setFont(font1);
        btn_line_3->setStyleSheet(QLatin1String("border:2px groove rgb(126, 126, 126);\n"
"border-radius:8px;\n"
"background-color: rgb(243, 246, 248);"));

        horizontalLayout->addWidget(btn_line_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);

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
        label_30->setFont(font6);
        label_30->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        horizontalLayout_11->addWidget(label_30);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_6);


        verticalLayout_8->addLayout(horizontalLayout_11);

        tb_news = new QTextBrowser(Dialog);
        tb_news->setObjectName(QStringLiteral("tb_news"));
        QFont font8;
        font8.setFamily(QStringLiteral("Microsoft YaHei"));
        font8.setPointSize(12);
        tb_news->setFont(font8);

        verticalLayout_8->addWidget(tb_news);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        btn_rumor = new QPushButton(Dialog);
        btn_rumor->setObjectName(QStringLiteral("btn_rumor"));
        btn_rumor->setFont(font1);

        horizontalLayout_14->addWidget(btn_rumor);

        btn_update = new QPushButton(Dialog);
        btn_update->setObjectName(QStringLiteral("btn_update"));
        btn_update->setFont(font1);

        horizontalLayout_14->addWidget(btn_update);

        btn_about = new QPushButton(Dialog);
        btn_about->setObjectName(QStringLiteral("btn_about"));
        btn_about->setFont(font1);

        horizontalLayout_14->addWidget(btn_about);

        btn_chkUpdate = new QPushButton(Dialog);
        btn_chkUpdate->setObjectName(QStringLiteral("btn_chkUpdate"));
        btn_chkUpdate->setFont(font1);
        btn_chkUpdate->setStyleSheet(QStringLiteral(""));

        horizontalLayout_14->addWidget(btn_chkUpdate);


        verticalLayout_8->addLayout(horizontalLayout_14);


        verticalLayout_9->addLayout(verticalLayout_8);

        verticalLayout_9->setStretch(0, 10);
        verticalLayout_9->setStretch(1, 12);

        horizontalLayout_12->addLayout(verticalLayout_9);

        horizontalLayout_12->setStretch(0, 2);
        horizontalLayout_12->setStretch(1, 1);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        lbe_pic->setText(QString());
        label_9->setText(QApplication::translate("Dialog", "\347\273\237\350\256\241\346\210\252\346\255\242\344\272\216", Q_NULLPTR));
        lbe_update_time->setText(QApplication::translate("Dialog", "2020-02-05 16:56:23", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog", "\350\276\203\344\270\212\346\227\245", Q_NULLPTR));
        lbe_add_confirm->setText(QApplication::translate("Dialog", "+123", Q_NULLPTR));
        lbe_total_confirm->setText(QApplication::translate("Dialog", "12345", Q_NULLPTR));
        lbe_confirm->setText(QApplication::translate("Dialog", "\347\241\256\350\257\212", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "\350\276\203\344\270\212\346\227\245", Q_NULLPTR));
        lbe_add_suspect->setText(QApplication::translate("Dialog", "+123", Q_NULLPTR));
        lbe_total_suspect->setText(QApplication::translate("Dialog", "12345", Q_NULLPTR));
        lbe_suspect->setText(QApplication::translate("Dialog", "\347\226\221\344\274\274", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog", "\350\276\203\344\270\212\346\227\245", Q_NULLPTR));
        lbe_add_heal->setText(QApplication::translate("Dialog", "+123", Q_NULLPTR));
        lbe_total_heal->setText(QApplication::translate("Dialog", "12345", Q_NULLPTR));
        lbe_heal->setText(QApplication::translate("Dialog", "\346\262\273\346\204\210", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "\350\276\203\344\270\212\346\227\245", Q_NULLPTR));
        lbe_add_dead->setText(QApplication::translate("Dialog", "+123", Q_NULLPTR));
        lbe_total_dead->setText(QApplication::translate("Dialog", "12345", Q_NULLPTR));
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
        btn_line_0->setText(QApplication::translate("Dialog", "\345\205\250\345\233\275\347\226\253\346\203\205\n"
"\346\226\260\345\242\236\350\266\213\345\212\277", Q_NULLPTR));
        btn_line_1->setText(QApplication::translate("Dialog", "\345\205\250\345\233\275\347\264\257\350\256\241\n"
"\347\241\256\350\257\212/\347\226\221\344\274\274", Q_NULLPTR));
        btn_line_2->setText(QApplication::translate("Dialog", "\345\205\250\345\233\275\347\264\257\350\256\241\n"
"\346\262\273\346\204\210/\346\255\273\344\272\241", Q_NULLPTR));
        btn_line_3->setText(QApplication::translate("Dialog", "\346\262\273\346\204\210\347\216\207\n"
"\347\227\205\346\255\273\347\216\207", Q_NULLPTR));
        label_30->setText(QApplication::translate("Dialog", "\346\234\200\346\226\260\345\212\250\346\200\201", Q_NULLPTR));
        tb_news->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        btn_rumor->setText(QApplication::translate("Dialog", "\350\276\237\350\260\243\344\277\241\346\201\257", Q_NULLPTR));
        btn_update->setText(QApplication::translate("Dialog", "\346\233\264\346\226\260", Q_NULLPTR));
        btn_about->setText(QApplication::translate("Dialog", "\345\205\263\344\272\216", Q_NULLPTR));
        btn_chkUpdate->setText(QApplication::translate("Dialog", "\346\243\200\346\237\245\346\233\264\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
