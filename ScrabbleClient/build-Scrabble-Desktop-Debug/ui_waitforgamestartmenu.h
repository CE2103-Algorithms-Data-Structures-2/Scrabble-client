/********************************************************************************
** Form generated from reading UI file 'waitforgamestartmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITFORGAMESTARTMENU_H
#define UI_WAITFORGAMESTARTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_WaitForGameStartMenu
{
public:

    void setupUi(QWizardPage *WaitForGameStartMenu)
    {
        if (WaitForGameStartMenu->objectName().isEmpty())
            WaitForGameStartMenu->setObjectName(QStringLiteral("WaitForGameStartMenu"));
        WaitForGameStartMenu->resize(1200, 700);
        WaitForGameStartMenu->setMinimumSize(QSize(1200, 700));
        WaitForGameStartMenu->setMaximumSize(QSize(1200, 700));

        retranslateUi(WaitForGameStartMenu);

        QMetaObject::connectSlotsByName(WaitForGameStartMenu);
    } // setupUi

    void retranslateUi(QWizardPage *WaitForGameStartMenu)
    {
        WaitForGameStartMenu->setWindowTitle(QApplication::translate("WaitForGameStartMenu", "WizardPage", 0));
    } // retranslateUi

};

namespace Ui {
    class WaitForGameStartMenu: public Ui_WaitForGameStartMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITFORGAMESTARTMENU_H
