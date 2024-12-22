/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button4;
    QPushButton *Button5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(942, 701);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 44, 44);\n"
"border-color: rgb(0, 0, 0);\n"
"font: 700 italic 16pt \"Segoe UI\";"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        Button1->setGeometry(QRect(290, -10, 281, 81));
        Button1->setStyleSheet(QString::fromUtf8("background-color: rgb(68, 16, 198);\n"
"color: rgb(255, 255, 255);\n"
"QPushButton {\n"
"border-radius: 10px\n"
"}"));
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        Button2->setGeometry(QRect(290, 110, 271, 81));
        Button2->setStyleSheet(QString::fromUtf8("background-color: rgb(68, 16, 198);\n"
"color: rgb(255, 255, 255);"));
        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        Button3->setGeometry(QRect(270, 220, 281, 81));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        Button4->setGeometry(QRect(300, 360, 271, 71));
        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        Button5->setGeometry(QRect(330, 490, 211, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 942, 41));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "4x4 Tic Tac Toe", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "Ultimate Tic Tac Toe ", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "Normal Tic Tac Toe", nullptr));
        Button4->setText(QCoreApplication::translate("MainWindow", "Misere Tac Tac Toe", nullptr));
        Button5->setText(QCoreApplication::translate("MainWindow", "5x5 Tic Tac Toe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
