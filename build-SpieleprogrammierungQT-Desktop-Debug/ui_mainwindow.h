/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QWidget *widget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_11;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_12;
    QTextBrowser *textBrowser_2;
    QSpacerItem *horizontalSpacer_13;
    QWidget *page;
    QWidget *Inverntory;
    QTabWidget *tabWidget;
    QWidget *Inventar;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *InventarLabel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *Mails;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *MailLabel;
    QSpacerItem *horizontalSpacer_6;
    QWidget *Options;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *Map;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *MapLabel;
    QSpacerItem *horizontalSpacer_4;
    QWidget *Console;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *userLabel;
    QLineEdit *lineEdit;
    QPushButton *Send;
    QLabel *label_6;
    QWidget *page_3;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QTextBrowser *textBrowser_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_8;
    QStackedWidget *stackedWidget_2;
    QWidget *page_4;
    QWidget *page_5;
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(802, 604);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 801, 601));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(30);
        stackedWidget->setFont(font);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        widget = new QWidget(page_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 801, 601));
        QFont font1;
        font1.setPointSize(8);
        widget->setFont(font1);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 330, 801, 30));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(115, 230, 0);"));

        horizontalLayout_8->addWidget(pushButton_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(115, 230, 0);"));

        horizontalLayout_8->addWidget(pushButton);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);

        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 120, 791, 101));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_12 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_12);

        textBrowser_2 = new QTextBrowser(layoutWidget1);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBrowser_2->sizePolicy().hasHeightForWidth());
        textBrowser_2->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        textBrowser_2->setFont(font2);

        horizontalLayout_9->addWidget(textBrowser_2);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_13);

        stackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        Inverntory = new QWidget(page);
        Inverntory->setObjectName(QString::fromUtf8("Inverntory"));
        Inverntory->setGeometry(QRect(400, 300, 411, 301));
        Inverntory->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        tabWidget = new QTabWidget(Inverntory);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 421, 321));
        QFont font3;
        font3.setPointSize(10);
        font3.setUnderline(false);
        tabWidget->setFont(font3);
        tabWidget->setStyleSheet(QString::fromUtf8("background:rgb(194, 194, 194)"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        Inventar = new QWidget();
        Inventar->setObjectName(QString::fromUtf8("Inventar"));
        QFont font4;
        font4.setUnderline(false);
        Inventar->setFont(font4);
        layoutWidget2 = new QWidget(Inventar);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 10, 411, 38));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        InventarLabel = new QLabel(layoutWidget2);
        InventarLabel->setObjectName(QString::fromUtf8("InventarLabel"));
        QFont font5;
        font5.setPointSize(18);
        InventarLabel->setFont(font5);
        InventarLabel->setStyleSheet(QString::fromUtf8("color: rgb(89, 179, 0);"));

        horizontalLayout_2->addWidget(InventarLabel);

        horizontalSpacer_2 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        tabWidget->addTab(Inventar, QString());
        Mails = new QWidget();
        Mails->setObjectName(QString::fromUtf8("Mails"));
        layoutWidget3 = new QWidget(Mails);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 10, 411, 38));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        MailLabel = new QLabel(layoutWidget3);
        MailLabel->setObjectName(QString::fromUtf8("MailLabel"));
        MailLabel->setFont(font5);
        MailLabel->setStyleSheet(QString::fromUtf8("color: rgb(89, 179, 0);"));

        horizontalLayout_4->addWidget(MailLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        tabWidget->addTab(Mails, QString());
        Options = new QWidget();
        Options->setObjectName(QString::fromUtf8("Options"));
        layoutWidget4 = new QWidget(Options);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 5, 401, 271));
        gridLayout = new QGridLayout(layoutWidget4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton_8 = new QPushButton(layoutWidget4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_3->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(layoutWidget4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout_3->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(layoutWidget4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_3->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(layoutWidget4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_3->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_3->addWidget(pushButton_5);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 2);

        tabWidget->addTab(Options, QString());
        Map = new QWidget(page);
        Map->setObjectName(QString::fromUtf8("Map"));
        Map->setGeometry(QRect(400, 0, 401, 301));
        Map->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        layoutWidget5 = new QWidget(Map);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 10, 421, 38));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        MapLabel = new QLabel(layoutWidget5);
        MapLabel->setObjectName(QString::fromUtf8("MapLabel"));
        MapLabel->setFont(font5);
        MapLabel->setStyleSheet(QString::fromUtf8("color: rgb(115, 230, 0);"));

        horizontalLayout_3->addWidget(MapLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        Console = new QWidget(page);
        Console->setObjectName(QString::fromUtf8("Console"));
        Console->setGeometry(QRect(-10, -20, 411, 621));
        Console->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        layoutWidget6 = new QWidget(Console);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(20, 30, 381, 581));
        verticalLayout_4 = new QVBoxLayout(layoutWidget6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(layoutWidget6);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 377, 548));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("border: 0px soild;"));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setEnabled(true);
        textBrowser->setGeometry(QRect(0, 0, 381, 551));
        textBrowser->setStyleSheet(QString::fromUtf8("border: 0px solid;\n"
"color: rgb(127, 255, 0);"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(layoutWidget6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        userLabel = new QLabel(layoutWidget6);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        userLabel->setStyleSheet(QString::fromUtf8("color: rgb(127, 255, 0);"));

        horizontalLayout->addWidget(userLabel);

        lineEdit = new QLineEdit(layoutWidget6);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border: 1px solid;\n"
"border-color: rgb(0, 0, 0);\n"
"border-bottom-color: rgb(255, 255, 255);\n"
"color: rgb(127, 255, 0);\n"
""));

        horizontalLayout->addWidget(lineEdit);

        Send = new QPushButton(layoutWidget6);
        Send->setObjectName(QString::fromUtf8("Send"));
        Send->setStyleSheet(QString::fromUtf8("font: 9pt \"MS Shell Dlg 2\";\n"
"border: 1px solid;\n"
"color: rgb(127, 255, 0);\n"
"border-bottom-color: rgb(255,255,255);"));

        horizontalLayout->addWidget(Send, 0, Qt::AlignRight);

        label_6 = new QLabel(layoutWidget6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);


        verticalLayout_4->addLayout(horizontalLayout);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        QFont font6;
        font6.setPointSize(12);
        page_3->setFont(font6);
        layoutWidget7 = new QWidget(page_3);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 10, 771, 561));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea_2 = new QScrollArea(layoutWidget7);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 377, 513));
        scrollAreaWidgetContents_3->setStyleSheet(QString::fromUtf8("border: 0px soild;"));
        textBrowser_3 = new QTextBrowser(scrollAreaWidgetContents_3);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setEnabled(true);
        textBrowser_3->setGeometry(QRect(0, 0, 381, 511));
        textBrowser_3->setStyleSheet(QString::fromUtf8("border: 0px solid;\n"
"color: rgb(127, 255, 0);"));
        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        verticalLayout->addWidget(scrollArea_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(layoutWidget7);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        label = new QLabel(layoutWidget7);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        lineEdit_2 = new QLineEdit(layoutWidget7);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_5->addWidget(lineEdit_2);

        pushButton_3 = new QPushButton(layoutWidget7);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_5->addWidget(pushButton_3);

        label_3 = new QLabel(layoutWidget7);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        label_4 = new QLabel(layoutWidget7);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_6);

        stackedWidget_2 = new QStackedWidget(layoutWidget7);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget_2->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        stackedWidget_2->addWidget(page_5);

        verticalLayout_2->addWidget(stackedWidget_2);

        tabWidget_2 = new QTabWidget(layoutWidget7);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget_2->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget_2->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget_2);


        horizontalLayout_7->addLayout(verticalLayout_2);

        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(lineEdit, tabWidget);
        QWidget::setTabOrder(tabWidget, scrollArea);
        QWidget::setTabOrder(scrollArea, Send);
        QWidget::setTabOrder(Send, textBrowser);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QTAdventure", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Neues Spiel ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Spiel Laden", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7fff00;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7fff00;\">Welomm</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7fff00;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0;"
                        " text-indent:0px;\"><span style=\" color:#7fff00;\">To the Story of starlied</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#7fff00;\"><br /></p></body></html>", nullptr));
        InventarLabel->setText(QCoreApplication::translate("MainWindow", "Inventar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Inventar), QCoreApplication::translate("MainWindow", "Inventar", nullptr));
        MailLabel->setText(QCoreApplication::translate("MainWindow", "Mails", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Mails), QCoreApplication::translate("MainWindow", "Mails", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Hilfe", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Erweiterte einstelungen", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "zum Titelbildschirm", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Spiel Speichern", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Verlasen", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Options), QCoreApplication::translate("MainWindow", "Optionen", nullptr));
        MapLabel->setText(QCoreApplication::translate("MainWindow", "Karte", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">System Lodet 100%</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7fff00;\">Welcom User</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7fff00;\">vor help tipe help or ?</span></p></body></html>", nullptr));
        label_5->setText(QString());
        userLabel->setText(QCoreApplication::translate("MainWindow", "~$", nullptr));
        lineEdit->setText(QString());
        Send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        label_6->setText(QString());
        textBrowser_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">System Lodet 100%</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7fff00;\">Welcom User</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7fff00;\">vor help tipe help or ?</span></p></body></html>", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "~$", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Karte", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
