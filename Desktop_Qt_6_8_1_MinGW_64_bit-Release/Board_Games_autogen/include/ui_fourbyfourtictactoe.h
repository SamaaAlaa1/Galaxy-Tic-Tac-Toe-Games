/********************************************************************************
** Form generated from reading UI file 'fourbyfourtictactoe.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURBYFOURTICTACTOE_H
#define UI_FOURBYFOURTICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FourByFourTicTacToe
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *FourByFourTicTacToe)
    {
        if (FourByFourTicTacToe->objectName().isEmpty())
            FourByFourTicTacToe->setObjectName("FourByFourTicTacToe");
        FourByFourTicTacToe->resize(847, 633);
        FourByFourTicTacToe->setStyleSheet(QString::fromUtf8(""));
        gridLayoutWidget = new QWidget(FourByFourTicTacToe);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(180, 120, 431, 391));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(FourByFourTicTacToe);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 30, 161, 41));
        verticalLayoutWidget = new QWidget(FourByFourTicTacToe);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 10, 821, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(FourByFourTicTacToe);

        QMetaObject::connectSlotsByName(FourByFourTicTacToe);
    } // setupUi

    void retranslateUi(QWidget *FourByFourTicTacToe)
    {
        FourByFourTicTacToe->setWindowTitle(QCoreApplication::translate("FourByFourTicTacToe", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("FourByFourTicTacToe", "Game Rules", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FourByFourTicTacToe: public Ui_FourByFourTicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURBYFOURTICTACTOE_H
