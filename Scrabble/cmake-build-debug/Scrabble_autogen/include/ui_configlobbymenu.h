/********************************************************************************
** Form generated from reading UI file 'configlobbymenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGLOBBYMENU_H
#define UI_CONFIGLOBBYMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_ConfigLobbyMenu
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QFrame *line;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QWizardPage *ConfigLobbyMenu)
    {
        if (ConfigLobbyMenu->objectName().isEmpty())
            ConfigLobbyMenu->setObjectName(QStringLiteral("ConfigLobbyMenu"));
        ConfigLobbyMenu->resize(1200, 700);
        ConfigLobbyMenu->setMinimumSize(QSize(1200, 700));
        ConfigLobbyMenu->setMaximumSize(QSize(1200, 700));
        QPalette palette;
        QBrush brush(QColor(38, 50, 56, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        ConfigLobbyMenu->setPalette(palette);
        ConfigLobbyMenu->setStyleSheet(QStringLiteral("background-color: rgb(38, 50, 56);"));
        centralWidget = new QWidget(ConfigLobbyMenu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 1201, 701));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 30);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(400, 40, 400, 40);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(0, 200, 81);"));

        verticalLayout->addWidget(label_2, 0, Qt::AlignHCenter);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 187, 51);\n"
"border-width : 1.5px;\n"
"border-style:inset;\n"
"border-radius: 7;\n"
""));
        lineEdit->setFrame(false);

        verticalLayout->addWidget(lineEdit, 0, Qt::AlignVCenter);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label->setPalette(palette1);
        QFont font2;
        font2.setFamily(QStringLiteral("Open Sans"));
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label, 0, Qt::AlignHCenter);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(40);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(300, 20, 300, 20);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font3;
        font3.setFamily(QStringLiteral("Open Sans"));
        font3.setPointSize(22);
        font3.setBold(false);
        font3.setWeight(50);
        label_4->setFont(font3);
        label_4->setStyleSheet(QStringLiteral("color: rgb(0, 200, 81);"));

        horizontalLayout_4->addWidget(label_4, 0, Qt::AlignHCenter);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setStyleSheet(QLatin1String("color: rgb(63, 114, 155);\n"
"background-color: rgb(63, 114, 155);"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QFont font4;
        font4.setFamily(QStringLiteral("Open Sans"));
        font4.setPointSize(14);
        comboBox->setFont(font4);

        horizontalLayout_4->addWidget(comboBox, 0, Qt::AlignHCenter);


        gridLayout->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(400, 40, 400, 40);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font3);
        label_3->setStyleSheet(QStringLiteral("color: rgb(0, 200, 81);"));

        verticalLayout_3->addWidget(label_3, 0, Qt::AlignHCenter);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 187, 51);\n"
"border-width : 1.5px;\n"
"border-style:inset;\n"
"border-radius: 7;\n"
""));

        verticalLayout_3->addWidget(lineEdit_3);


        gridLayout->addLayout(verticalLayout_3, 3, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font5;
        font5.setFamily(QStringLiteral("Open Sans"));
        font5.setPointSize(18);
        pushButton->setFont(font5);
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(51, 181, 229);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"border-width : 1.5px;\n"
"border-style:inset;\n"
"border-color: rgb(105, 240, 174);\n"
"  padding-top: 0px;\n"
"  padding-right: 35px;\n"
"  padding-bottom: 0px;\n"
"  padding-left: 35px;"));

        gridLayout->addWidget(pushButton, 14, 0, 1, 1, Qt::AlignHCenter);

        mainToolBar = new QToolBar(ConfigLobbyMenu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setGeometry(QRect(0, 0, 4, 13));
        statusBar = new QStatusBar(ConfigLobbyMenu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setGeometry(QRect(0, 0, 3, 25));

        retranslateUi(ConfigLobbyMenu);

        QMetaObject::connectSlotsByName(ConfigLobbyMenu);
    } // setupUi

    void retranslateUi(QWizardPage *ConfigLobbyMenu)
    {
        ConfigLobbyMenu->setWindowTitle(QApplication::translate("ConfigLobbyMenu", "Scrabble", Q_NULLPTR));
        label_2->setText(QApplication::translate("ConfigLobbyMenu", "Nombre del lobby", Q_NULLPTR));
        label->setText(QApplication::translate("ConfigLobbyMenu", "<html><head/><body><p><span style=\" font-size:36pt;\">Seleccione la configuraci\303\263n de su lobby</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("ConfigLobbyMenu", "Cantidad de jugadores", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ConfigLobbyMenu", "2", Q_NULLPTR)
         << QApplication::translate("ConfigLobbyMenu", "3", Q_NULLPTR)
         << QApplication::translate("ConfigLobbyMenu", "4", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("ConfigLobbyMenu", "Su nombre", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ConfigLobbyMenu", "Enviar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConfigLobbyMenu: public Ui_ConfigLobbyMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGLOBBYMENU_H
