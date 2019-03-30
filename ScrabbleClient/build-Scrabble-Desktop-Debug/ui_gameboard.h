/********************************************************************************
** Form generated from reading UI file 'gameboard.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEBOARD_H
#define UI_GAMEBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_GameBoard
{
public:

    void setupUi(QWizardPage *GameBoard)
    {
        if (GameBoard->objectName().isEmpty())
            GameBoard->setObjectName(QStringLiteral("GameBoard"));
        GameBoard->resize(1200, 700);
        GameBoard->setMinimumSize(QSize(1200, 700));
        GameBoard->setMaximumSize(QSize(1200, 700));

        retranslateUi(GameBoard);

        QMetaObject::connectSlotsByName(GameBoard);
    } // setupUi

    void retranslateUi(QWizardPage *GameBoard)
    {
        GameBoard->setWindowTitle(QApplication::translate("GameBoard", "WizardPage", 0));
    } // retranslateUi

};

namespace Ui {
    class GameBoard: public Ui_GameBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEBOARD_H
