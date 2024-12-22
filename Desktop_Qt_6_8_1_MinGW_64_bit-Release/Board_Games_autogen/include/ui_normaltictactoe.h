/********************************************************************************
** Form generated from reading UI file 'normaltictactoe.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMALTICTACTOE_H
#define UI_NORMALTICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NormalTicTacToe
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *NormalTicTacToe)
    {
        if (NormalTicTacToe->objectName().isEmpty())
            NormalTicTacToe->setObjectName("NormalTicTacToe");
        NormalTicTacToe->resize(773, 674);
        gridLayoutWidget = new QWidget(NormalTicTacToe);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(190, 210, 301, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(NormalTicTacToe);

        QMetaObject::connectSlotsByName(NormalTicTacToe);
    } // setupUi

    void retranslateUi(QWidget *NormalTicTacToe)
    {
        NormalTicTacToe->setWindowTitle(QCoreApplication::translate("NormalTicTacToe", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NormalTicTacToe: public Ui_NormalTicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMALTICTACTOE_H
