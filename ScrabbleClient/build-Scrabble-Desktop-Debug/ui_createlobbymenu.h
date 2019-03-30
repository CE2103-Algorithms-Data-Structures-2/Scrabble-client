/********************************************************************************
** Form generated from reading UI file 'createlobbymenu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATELOBBYMENU_H
#define UI_CREATELOBBYMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_CreateLobbyMenu
{
public:

    void setupUi(QWizardPage *CreateLobbyMenu)
    {
        if (CreateLobbyMenu->objectName().isEmpty())
            CreateLobbyMenu->setObjectName(QStringLiteral("CreateLobbyMenu"));
        CreateLobbyMenu->resize(400, 300);

        retranslateUi(CreateLobbyMenu);

        QMetaObject::connectSlotsByName(CreateLobbyMenu);
    } // setupUi

    void retranslateUi(QWizardPage *CreateLobbyMenu)
    {
        CreateLobbyMenu->setWindowTitle(QApplication::translate("CreateLobbyMenu", "WizardPage", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateLobbyMenu: public Ui_CreateLobbyMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATELOBBYMENU_H
