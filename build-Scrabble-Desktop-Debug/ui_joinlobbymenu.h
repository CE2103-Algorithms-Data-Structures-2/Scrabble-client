/********************************************************************************
** Form generated from reading UI file 'joinlobbymenu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINLOBBYMENU_H
#define UI_JOINLOBBYMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_JoinLobbyMenu
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWizardPage *JoinLobbyMenu)
    {
        if (JoinLobbyMenu->objectName().isEmpty())
            JoinLobbyMenu->setObjectName(QStringLiteral("JoinLobbyMenu"));
        JoinLobbyMenu->resize(1200, 700);
        JoinLobbyMenu->setMinimumSize(QSize(1200, 700));
        JoinLobbyMenu->setMaximumSize(QSize(1200, 700));
        verticalLayout = new QVBoxLayout(JoinLobbyMenu);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 250, -1, 250);
        label = new QLabel(JoinLobbyMenu);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(36);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(105, 240, 174);"));

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        lineEdit = new QLineEdit(JoinLobbyMenu);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(12);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"border-width : 1.5px;\n"
"border-style:inset;\n"
"border-color: rgb(255, 187, 51);\n"
""));

        verticalLayout->addWidget(lineEdit, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        retranslateUi(JoinLobbyMenu);

        QMetaObject::connectSlotsByName(JoinLobbyMenu);
    } // setupUi

    void retranslateUi(QWizardPage *JoinLobbyMenu)
    {
        JoinLobbyMenu->setWindowTitle(QApplication::translate("JoinLobbyMenu", "WizardPage", 0));
        label->setText(QApplication::translate("JoinLobbyMenu", "Ingrese el c\303\263digo del lobby al que desea unirse", 0));
    } // retranslateUi

};

namespace Ui {
    class JoinLobbyMenu: public Ui_JoinLobbyMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINLOBBYMENU_H
