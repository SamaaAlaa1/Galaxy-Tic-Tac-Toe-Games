/********************************************************************************
** Form generated from reading UI file 'ultimatetictactoe.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ULTIMATETICTACTOE_H
#define UI_ULTIMATETICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UltimateTicTacToe
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *UltimateTicTacToe)
    {
        if (UltimateTicTacToe->objectName().isEmpty())
            UltimateTicTacToe->setObjectName("UltimateTicTacToe");
        UltimateTicTacToe->resize(937, 776);
        gridLayoutWidget = new QWidget(UltimateTicTacToe);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(270, 270, 231, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(UltimateTicTacToe);

        QMetaObject::connectSlotsByName(UltimateTicTacToe);
    } // setupUi

    void retranslateUi(QWidget *UltimateTicTacToe)
    {
        UltimateTicTacToe->setWindowTitle(QCoreApplication::translate("UltimateTicTacToe", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UltimateTicTacToe: public Ui_UltimateTicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ULTIMATETICTACTOE_H
