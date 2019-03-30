/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/mainmenu.h"

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QPushButton *pushButton;
    QFrame *line;
    QPushButton *pushButton_2;

    void setupUi(MainMenu *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(1200, 700);
        MainMenu->setStyleSheet(QLatin1String("QWidget#verticalWidget {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(1, 113, 200, 255), stop:0.377273 rgba(137, 123, 168, 255), stop:0.636364 rgba(194, 134, 135, 255), stop:1 rgba(240, 146, 100, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"border-style: solid;\n"
"border-width: 5px;\n"
"};\n"
""));
        verticalLayout = new QVBoxLayout(MainMenu);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalWidget = new QWidget(MainMenu);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setMinimumSize(QSize(1182, 682));
        verticalWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(verticalWidget);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_2->setContentsMargins(200, 50, 200, 250);
        label = new QLabel(verticalWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(72);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color: rgb(0, 200, 81);\n"
"background-color: rgba(0,0,0,0%)\n"
""));

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignTop);

        pushButton = new QPushButton(verticalWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("padding-right: 110px;\n"
"padding-left: 110px;\n"
"padding-top: 3px;\n"
"padding-bottom: 3px;\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"background-color: rgb(51, 181, 229);"));

        verticalLayout_2->addWidget(pushButton, 0, Qt::AlignHCenter);

        line = new QFrame(verticalWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"  padding-right: 100px;\n"
"  padding-left: 100px;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        pushButton_2 = new QPushButton(verticalWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("padding-right: 100px;\n"
"padding-left: 100px;\n"
"padding-top: 3px;\n"
"padding-bottom: 3px;\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"background-color: rgb(51, 181, 229);"));

        verticalLayout_2->addWidget(pushButton_2, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(verticalWidget);


        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(MainMenu *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "WizardPage", Q_NULLPTR));
        label->setText(QApplication::translate("MainMenu", "Scrabble", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainMenu", "Crear Partida", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainMenu", "Unirse a partida", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
