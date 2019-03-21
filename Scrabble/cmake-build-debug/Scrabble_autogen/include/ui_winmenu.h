/********************************************************************************
** Form generated from reading UI file 'winmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINMENU_H
#define UI_WINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_WinMenu
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWizardPage *WinMenu)
    {
        if (WinMenu->objectName().isEmpty())
            WinMenu->setObjectName(QStringLiteral("WinMenu"));
        WinMenu->resize(1200, 700);
        WinMenu->setStyleSheet(QStringLiteral("background-color: rgb(38, 50, 56);"));
        verticalLayout_2 = new QVBoxLayout(WinMenu);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 250, -1, 250);
        label = new QLabel(WinMenu);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(0, 200, 81);"));

        verticalLayout_3->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton = new QPushButton(WinMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(24);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(51, 181, 229);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"padding-right: 10px;\n"
"padding-left: 10px;\n"
""));

        verticalLayout_3->addWidget(pushButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_2->addLayout(verticalLayout_3);


        retranslateUi(WinMenu);

        QMetaObject::connectSlotsByName(WinMenu);
    } // setupUi

    void retranslateUi(QWizardPage *WinMenu)
    {
        WinMenu->setWindowTitle(QApplication::translate("WinMenu", "WizardPage", Q_NULLPTR));
        label->setText(QApplication::translate("WinMenu", "\302\241Has Ganado!", Q_NULLPTR));
        pushButton->setText(QApplication::translate("WinMenu", "Volver al menu principal", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WinMenu: public Ui_WinMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINMENU_H
