/********************************************************************************
** Form generated from reading UI file 'losemenu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOSEMENU_H
#define UI_LOSEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_LoseMenu
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWizardPage *LoseMenu)
    {
        if (LoseMenu->objectName().isEmpty())
            LoseMenu->setObjectName(QStringLiteral("LoseMenu"));
        LoseMenu->resize(1200, 700);
        LoseMenu->setMinimumSize(QSize(1200, 700));
        LoseMenu->setMaximumSize(QSize(1200, 700));
        LoseMenu->setStyleSheet(QStringLiteral(""));
        verticalLayoutWidget = new QWidget(LoseMenu);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 1182, 682));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 250, 0, 250);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 68, 68);"));

        verticalLayout_3->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton = new QPushButton(verticalLayoutWidget);
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
"border-color: rgb(0, 200, 81);\n"
"\n"
""));

        verticalLayout_3->addWidget(pushButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        retranslateUi(LoseMenu);

        QMetaObject::connectSlotsByName(LoseMenu);
    } // setupUi

    void retranslateUi(QWizardPage *LoseMenu)
    {
        LoseMenu->setWindowTitle(QApplication::translate("LoseMenu", "WizardPage", 0));
        label->setText(QApplication::translate("LoseMenu", "\302\241Has Perdido!", 0));
        pushButton->setText(QApplication::translate("LoseMenu", "Volver al menu principal", 0));
    } // retranslateUi

};

namespace Ui {
    class LoseMenu: public Ui_LoseMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOSEMENU_H
