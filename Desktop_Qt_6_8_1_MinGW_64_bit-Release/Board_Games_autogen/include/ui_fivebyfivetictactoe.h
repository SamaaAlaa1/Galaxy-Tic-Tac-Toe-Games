/********************************************************************************
** Form generated from reading UI file 'fivebyfivetictactoe.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIVEBYFIVETICTACTOE_H
#define UI_FIVEBYFIVETICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FiveByFiveTicTacToe
{
public:

    void setupUi(QWidget *FiveByFiveTicTacToe)
    {
        if (FiveByFiveTicTacToe->objectName().isEmpty())
            FiveByFiveTicTacToe->setObjectName("FiveByFiveTicTacToe");
        FiveByFiveTicTacToe->resize(400, 300);

        retranslateUi(FiveByFiveTicTacToe);

        QMetaObject::connectSlotsByName(FiveByFiveTicTacToe);
    } // setupUi

    void retranslateUi(QWidget *FiveByFiveTicTacToe)
    {
        FiveByFiveTicTacToe->setWindowTitle(QCoreApplication::translate("FiveByFiveTicTacToe", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FiveByFiveTicTacToe: public Ui_FiveByFiveTicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIVEBYFIVETICTACTOE_H
