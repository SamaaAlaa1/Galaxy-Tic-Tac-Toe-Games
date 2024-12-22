/********************************************************************************
** Form generated from reading UI file 'miseretictactoe.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MISERETICTACTOE_H
#define UI_MISERETICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MisereTicTacToe
{
public:

    void setupUi(QWidget *MisereTicTacToe)
    {
        if (MisereTicTacToe->objectName().isEmpty())
            MisereTicTacToe->setObjectName("MisereTicTacToe");
        MisereTicTacToe->resize(720, 668);

        retranslateUi(MisereTicTacToe);

        QMetaObject::connectSlotsByName(MisereTicTacToe);
    } // setupUi

    void retranslateUi(QWidget *MisereTicTacToe)
    {
        MisereTicTacToe->setWindowTitle(QCoreApplication::translate("MisereTicTacToe", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MisereTicTacToe: public Ui_MisereTicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISERETICTACTOE_H
