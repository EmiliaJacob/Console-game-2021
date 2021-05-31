/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *Console;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *textBrowser;
    QWidget *Inverntory;
    QTabWidget *tabWidget;
    QWidget *Inventar;
    QLabel *label_3;
    QWidget *Mails;
    QLabel *label;
    QWidget *Map;
    QLabel *label_2;
    QWidget *page_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 801, 581));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        Console = new QWidget(page);
        Console->setObjectName(QString::fromUtf8("Console"));
        Console->setGeometry(QRect(-1, -1, 381, 581));
        Console->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        lineEdit = new QLineEdit(Console);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 530, 311, 22));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(127, 255, 0);\n"
"gridline-color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(Console);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 530, 41, 28));
        pushButton->setStyleSheet(QString::fromUtf8("font: 7pt \"MS Shell Dlg 2\";\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(127, 255, 0);\n"
"background-color: rgb(0, 0, 0);"));
        scrollArea = new QScrollArea(Console);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 20, 361, 501));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 359, 499));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setEnabled(true);
        textBrowser->setGeometry(QRect(0, 0, 361, 501));
        scrollArea->setWidget(scrollAreaWidgetContents);
        Inverntory = new QWidget(page);
        Inverntory->setObjectName(QString::fromUtf8("Inverntory"));
        Inverntory->setGeometry(QRect(380, 300, 421, 271));
        Inverntory->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        tabWidget = new QTabWidget(Inverntory);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 421, 311));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 195, 195);"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        Inventar = new QWidget();
        Inventar->setObjectName(QString::fromUtf8("Inventar"));
        label_3 = new QLabel(Inventar);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 0, 111, 31));
        QFont font;
        font.setPointSize(18);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(127, 255, 0);"));
        tabWidget->addTab(Inventar, QString());
        Mails = new QWidget();
        Mails->setObjectName(QString::fromUtf8("Mails"));
        label = new QLabel(Mails);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 20, 71, 31));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(127, 255, 0);"));
        tabWidget->addTab(Mails, QString());
        Map = new QWidget(page);
        Map->setObjectName(QString::fromUtf8("Map"));
        Map->setGeometry(QRect(380, -1, 421, 301));
        Map->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        label_2 = new QLabel(Map);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 0, 91, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(127, 255, 0);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7fff00;\">du gehst durch eine lange dunkle h\303\266lle.<br />abersonst ist eigentlich zimlich chilig hier</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Inventar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Inventar), QCoreApplication::translate("MainWindow", "Inventar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Mails", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Mails), QCoreApplication::translate("MainWindow", "Mails", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Karte", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
