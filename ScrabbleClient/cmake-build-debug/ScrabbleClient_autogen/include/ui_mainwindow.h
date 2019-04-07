/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *MainMenu;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_5;
    QPushButton *pushButton_9;
    QFrame *line_5;
    QPushButton *pushButton_10;
    QWidget *ConfigMenu;
    QWidget *centralWidget_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QFrame *line;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_12;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_14;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QWidget *JoinMenu;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_8;
    QLabel *label_13;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QLabel *label_3;
    QWidget *WaitMenu;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QGroupBox *groupBox_2;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QGroupBox *groupBox_4;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QGroupBox *groupBox_3;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_44;
    QLabel *label_45;
    QPushButton *pushButton_2;
    QLabel *label_43;
    QLabel *label_41;
    QLabel *label_42;
    QPushButton *pushButton_12;
    QWidget *GameBoard;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_37;
    QLabel *label_40;
    QLabel *label_38;
    QLabel *label_39;
    QWidget *WinMenu;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QPushButton *pushButton_11;
    QWidget *LoseMenu;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_8;
    QPushButton *pushButton_13;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 700);
        MainWindow->setMinimumSize(QSize(1200, 700));
        MainWindow->setMaximumSize(QSize(1200, 700));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(1200, 700));
        centralWidget->setMaximumSize(QSize(1200, 720));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1200, 700));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: rgb(38, 50, 56);"));
        MainMenu = new QWidget();
        MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->setStyleSheet(QLatin1String("QWidget#verticalWidget {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(1, 113, 200, 255), stop:0.377273 rgba(137, 123, 168, 255), stop:0.636364 rgba(194, 134, 135, 255), stop:1 rgba(240, 146, 100, 255));\n"
"border-style: solid;\n"
"border-width: 5px;\n"
"};\n"
""));
        verticalWidget = new QWidget(MainMenu);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setGeometry(QRect(-30, 0, 1231, 700));
        verticalWidget->setMinimumSize(QSize(1182, 682));
        verticalWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout_9 = new QVBoxLayout(verticalWidget);
        verticalLayout_9->setSpacing(20);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_9->setContentsMargins(200, 50, 200, 250);
        label_5 = new QLabel(verticalWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(72);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgba(0,0,0,0%)\n"
""));

        verticalLayout_9->addWidget(label_5, 0, Qt::AlignHCenter|Qt::AlignTop);

        pushButton_9 = new QPushButton(verticalWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QLatin1String("padding-right: 110px;\n"
"padding-left: 110px;\n"
"padding-top: 3px;\n"
"padding-bottom: 3px;\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"background-color: rgb(51, 181, 229);"));

        verticalLayout_9->addWidget(pushButton_9, 0, Qt::AlignHCenter);

        line_5 = new QFrame(verticalWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"padding-right: 100px;\n"
"padding-left: 100px;"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(line_5);

        pushButton_10 = new QPushButton(verticalWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setFont(font1);
        pushButton_10->setStyleSheet(QLatin1String("padding-right: 100px;\n"
"padding-left: 100px;\n"
"padding-top: 3px;\n"
"padding-bottom: 3px;\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"background-color: rgb(51, 181, 229);"));

        verticalLayout_9->addWidget(pushButton_10, 0, Qt::AlignHCenter);

        stackedWidget->addWidget(MainMenu);
        ConfigMenu = new QWidget();
        ConfigMenu->setObjectName(QStringLiteral("ConfigMenu"));
        ConfigMenu->setStyleSheet(QLatin1String("#ConfigMenu {\n"
"border-color: rgb(255, 136, 0);\n"
"border-color: rgb(255, 136, 0);\n"
"border-width:  3px;\n"
"border-style: solid;\n"
"background-color: rgb(38, 50, 56);\n"
"}"));
        centralWidget_2 = new QWidget(ConfigMenu);
        centralWidget_2->setObjectName(QStringLiteral("centralWidget_2"));
        centralWidget_2->setGeometry(QRect(0, 0, 1201, 701));
        gridLayout = new QGridLayout(centralWidget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 30, 0, 30);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(10);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(400, 0, 400, 40);
        label_9 = new QLabel(centralWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font2;
        font2.setFamily(QStringLiteral("Open Sans"));
        font2.setPointSize(22);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label_9->setFont(font2);
        label_9->setStyleSheet(QStringLiteral("color: rgb(105, 240, 174);"));

        verticalLayout_12->addWidget(label_9, 0, Qt::AlignHCenter);

        lineEdit_2 = new QLineEdit(centralWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        QFont font3;
        font3.setFamily(QStringLiteral("Open Sans"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        lineEdit_2->setFont(font3);
        lineEdit_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 187, 51);\n"
"border-width : 1.5px;\n"
"border-style:inset;\n"
"border-radius: 7;\n"
""));
        lineEdit_2->setFrame(false);

        verticalLayout_12->addWidget(lineEdit_2, 0, Qt::AlignVCenter);


        gridLayout->addLayout(verticalLayout_12, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_10 = new QLabel(centralWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(38, 50, 56, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_10->setPalette(palette);
        QFont font4;
        font4.setFamily(QStringLiteral("Open Sans"));
        font4.setBold(true);
        font4.setWeight(75);
        label_10->setFont(font4);
        label_10->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"padding-top: 10px;\n"
"padding-bottom: 10px;"));

        horizontalLayout->addWidget(label_10, 0, Qt::AlignHCenter);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(40);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(300, 20, 300, 20);
        label_11 = new QLabel(centralWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        QFont font5;
        font5.setFamily(QStringLiteral("Open Sans"));
        font5.setPointSize(22);
        font5.setBold(false);
        font5.setWeight(50);
        label_11->setFont(font5);
        label_11->setStyleSheet(QStringLiteral("color: rgb(105, 240, 174);"));

        horizontalLayout_4->addWidget(label_11, 0, Qt::AlignHCenter);

        line = new QFrame(centralWidget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setStyleSheet(QLatin1String("color: rgb(63, 114, 155);\n"
"background-color: rgb(63, 114, 155);"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        comboBox = new QComboBox(centralWidget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QFont font6;
        font6.setFamily(QStringLiteral("Open Sans"));
        font6.setPointSize(14);
        comboBox->setFont(font6);
        comboBox->setStyleSheet(QLatin1String("color: rgb(238, 238, 236);\n"
"background-color: rgb(0, 200, 81);\n"
"border-color: rgb(255, 136, 0);"));

        horizontalLayout_4->addWidget(comboBox, 0, Qt::AlignHCenter);


        gridLayout->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(10);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(400, 0, 400, 40);
        label_12 = new QLabel(centralWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font5);
        label_12->setStyleSheet(QStringLiteral("color: rgb(105, 240, 174);"));

        verticalLayout_13->addWidget(label_12, 0, Qt::AlignHCenter);

        lineEdit_3 = new QLineEdit(centralWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 187, 51);\n"
"border-width : 1.5px;\n"
"border-style:inset;\n"
"border-radius: 7;\n"
""));

        verticalLayout_13->addWidget(lineEdit_3);


        gridLayout->addLayout(verticalLayout_13, 3, 0, 1, 1);

        pushButton_14 = new QPushButton(centralWidget_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        QFont font7;
        font7.setFamily(QStringLiteral("Open Sans"));
        font7.setPointSize(18);
        pushButton_14->setFont(font7);
        pushButton_14->setStyleSheet(QLatin1String("background-color: rgb(51, 181, 229);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"border-width : 1.5px;\n"
"border-style:inset;\n"
"border-color: rgb(105, 240, 174);\n"
"  padding-top: 0px;\n"
"  padding-right: 35px;\n"
"  padding-bottom: 0px;\n"
"  padding-left: 35px;"));

        gridLayout->addWidget(pushButton_14, 14, 0, 1, 1, Qt::AlignHCenter);

        label_2 = new QLabel(centralWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font7);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 68, 68);"));

        gridLayout->addWidget(label_2, 15, 0, 1, 1, Qt::AlignHCenter);

        pushButton_5 = new QPushButton(centralWidget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QFont font8;
        font8.setFamily(QStringLiteral("Open Sans"));
        font8.setPointSize(16);
        pushButton_5->setFont(font8);
        pushButton_5->setStyleSheet(QLatin1String("background-color: rgb(38, 50, 56);\n"
"border-color: rgb(38, 50, 56);\n"
"color: rgb(255, 68, 68);\n"
"border-radius: 10px;\n"
"border-width : 0px;\n"
"border-style:inset;\n"
"  padding-top: 0px;\n"
"  padding-right: 35px;\n"
"  padding-bottom: 0px;\n"
"  padding-left: 35px;"));

        gridLayout->addWidget(pushButton_5, 0, 0, 1, 1, Qt::AlignLeft);

        stackedWidget->addWidget(ConfigMenu);
        JoinMenu = new QWidget();
        JoinMenu->setObjectName(QStringLiteral("JoinMenu"));
        JoinMenu->setStyleSheet(QLatin1String("#JoinMenu{\n"
"background-color: rgb(38, 50, 56);\n"
"border-color: rgb(255, 136, 0);\n"
"border-width: 3px;\n"
"border-style: solid;\n"
"}"));
        verticalLayoutWidget = new QWidget(JoinMenu);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, -1, 1201, 782));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(30);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 100, 0, 100);
        pushButton_8 = new QPushButton(verticalLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setFont(font8);
        pushButton_8->setStyleSheet(QLatin1String("background-color: rgb(38, 50, 56);\n"
"border-color: rgb(38, 50, 56);\n"
"color: rgb(255, 68, 68);\n"
"border-radius: 10px;\n"
"border-width : 0px;\n"
"border-style:inset;\n"
"  padding-top: 0px;\n"
"  padding-right: 35px;\n"
"  padding-bottom: 0px;\n"
"  padding-left: 35px;"));

        verticalLayout->addWidget(pushButton_8, 0, Qt::AlignLeft);

        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        QFont font9;
        font9.setFamily(QStringLiteral("Open Sans"));
        font9.setPointSize(36);
        label_13->setFont(font9);
        label_13->setStyleSheet(QLatin1String("color: rgb(105, 240, 174);\n"
""));

        verticalLayout->addWidget(label_13, 0, Qt::AlignHCenter);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font6);
        lineEdit->setStyleSheet(QLatin1String("padding-top: 0px;\n"
"background-color: rgb(238, 238, 236);\n"
"padding-right: 60px;\n"
"padding-bottom: 0px;\n"
"padding-left: 60px;\n"
"border-radius: 10px;\n"
"border-width : 1.5px;\n"
"border-style:inset;\n"
"border-color: rgb(255, 187, 51);"));

        verticalLayout->addWidget(lineEdit, 0, Qt::AlignHCenter);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font9);
        label->setStyleSheet(QLatin1String("color: rgb(105, 240, 174);\n"
""));

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setFont(font6);
        lineEdit_4->setStyleSheet(QLatin1String("padding-top: 0px;\n"
"background-color: rgb(238, 238, 236);\n"
"padding-right: 60px;\n"
"padding-bottom: 0px;\n"
"padding-left: 60px;\n"
"border-radius: 10px;\n"
"border-width : 1.5px;\n"
"border-style:inset;\n"
"border-color: rgb(255, 187, 51);"));

        verticalLayout->addWidget(lineEdit_4, 0, Qt::AlignHCenter);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font7);
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(51, 181, 229);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"border-width : 1.5px;\n"
"border-style:inset;\n"
"border-color: rgb(105, 240, 174);\n"
" margin-top: 30px;\n"
"  padding-top: 0px;\n"
"  padding-right: 35px;\n"
"  padding-bottom: 0px;\n"
"  padding-left: 35px;"));

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font10;
        font10.setFamily(QStringLiteral("Open Sans"));
        font10.setPointSize(20);
        label_3->setFont(font10);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 68, 68);"));

        verticalLayout->addWidget(label_3, 0, Qt::AlignHCenter);

        stackedWidget->addWidget(JoinMenu);
        WaitMenu = new QWidget();
        WaitMenu->setObjectName(QStringLiteral("WaitMenu"));
        WaitMenu->setStyleSheet(QLatin1String("#WaitMenu {\n"
"border-color: rgb(255, 136, 0);\n"
"border-color: rgb(255, 136, 0);\n"
"border-width:  3px;\n"
"border-style: solid;\n"
"background-color: rgb(38, 50, 56);\n"
"}"));
        groupBox = new QGroupBox(WaitMenu);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 30, 301, 181));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 60, 101, 21));
        QFont font11;
        font11.setFamily(QStringLiteral("Open Sans"));
        font11.setPointSize(14);
        font11.setBold(false);
        font11.setItalic(false);
        font11.setWeight(50);
        label_4->setFont(font11);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 0, 101, 31));
        label_7->setFont(font8);
        label_7->setStyleSheet(QStringLiteral("color: rgb(0, 200, 81);"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(140, 110, 131, 21));
        label_14->setFont(font11);
        label_14->setStyleSheet(QStringLiteral("color: rgb(255, 68, 68);"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 110, 101, 21));
        label_15->setFont(font11);
        label_15->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(140, 60, 101, 21));
        label_16->setFont(font11);
        label_16->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        groupBox_2 = new QGroupBox(WaitMenu);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(90, 490, 301, 181));
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(30, 60, 101, 21));
        label_22->setFont(font11);
        label_22->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(100, 0, 101, 31));
        label_23->setFont(font8);
        label_23->setStyleSheet(QStringLiteral("color: rgb(0, 200, 81);"));
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(140, 110, 131, 21));
        label_24->setFont(font11);
        label_24->setStyleSheet(QStringLiteral("color: rgb(255, 68, 68);"));
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(30, 110, 101, 21));
        label_25->setFont(font11);
        label_25->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(140, 60, 101, 21));
        label_26->setFont(font11);
        label_26->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        groupBox_4 = new QGroupBox(WaitMenu);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(840, 30, 301, 181));
        label_32 = new QLabel(groupBox_4);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(30, 60, 101, 21));
        label_32->setFont(font11);
        label_32->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_33 = new QLabel(groupBox_4);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(100, 0, 101, 31));
        label_33->setFont(font8);
        label_33->setStyleSheet(QStringLiteral("color: rgb(0, 200, 81);"));
        label_34 = new QLabel(groupBox_4);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(140, 110, 131, 21));
        label_34->setFont(font11);
        label_34->setStyleSheet(QStringLiteral("color: rgb(255, 68, 68);"));
        label_35 = new QLabel(groupBox_4);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(30, 110, 101, 21));
        label_35->setFont(font11);
        label_35->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_36 = new QLabel(groupBox_4);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(140, 60, 101, 21));
        label_36->setFont(font11);
        label_36->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        groupBox_3 = new QGroupBox(WaitMenu);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(840, 490, 301, 181));
        label_27 = new QLabel(groupBox_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(30, 60, 101, 21));
        label_27->setFont(font11);
        label_27->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(100, 0, 101, 31));
        label_28->setFont(font8);
        label_28->setStyleSheet(QStringLiteral("color: rgb(0, 200, 81);"));
        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(140, 110, 131, 21));
        label_29->setFont(font11);
        label_29->setStyleSheet(QStringLiteral("color: rgb(255, 68, 68);"));
        label_30 = new QLabel(groupBox_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(30, 110, 101, 21));
        label_30->setFont(font11);
        label_30->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_31 = new QLabel(groupBox_3);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(140, 60, 101, 21));
        label_31->setFont(font11);
        label_31->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        verticalLayoutWidget_2 = new QWidget(WaitMenu);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(470, 30, 261, 651));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_44 = new QLabel(verticalLayoutWidget_2);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setFont(font10);
        label_44->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_44);

        label_45 = new QLabel(verticalLayoutWidget_2);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setFont(font10);
        label_45->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_45);

        pushButton_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font7);
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(51, 181, 229);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"border-width : 1.5px;\n"
"border-style:inset;\n"
"border-color: rgb(105, 240, 174);\n"
""));

        verticalLayout_2->addWidget(pushButton_2);

        label_43 = new QLabel(verticalLayoutWidget_2);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setFont(font6);
        label_43->setStyleSheet(QStringLiteral("color: rgb(255, 136, 0);"));

        verticalLayout_2->addWidget(label_43);

        label_41 = new QLabel(verticalLayoutWidget_2);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setFont(font7);
        label_41->setStyleSheet(QStringLiteral("color: rgb(243, 243, 243);"));

        verticalLayout_2->addWidget(label_41);

        label_42 = new QLabel(verticalLayoutWidget_2);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setFont(font8);
        label_42->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_42);

        pushButton_12 = new QPushButton(verticalLayoutWidget_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setFont(font8);
        pushButton_12->setStyleSheet(QLatin1String("background-color: rgb(38, 50, 56);\n"
"color: rgb(255, 68, 68);\n"
"border-radius: 10px;\n"
"border-width : 1.5px;\n"
"border-style:inset;\n"
"border-color: rgb(230, 81, 0);\n"
"  padding-top: 0px;\n"
"  padding-right: 35px;\n"
"  padding-bottom: 0px;\n"
"  padding-left: 35px;"));

        verticalLayout_2->addWidget(pushButton_12);

        stackedWidget->addWidget(WaitMenu);
        GameBoard = new QWidget();
        GameBoard->setObjectName(QStringLiteral("GameBoard"));
        gridLayoutWidget = new QWidget(GameBoard);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(240, 10, 691, 581));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(GameBoard);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 620, 221, 41));
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgb(33, 150, 243);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"border-width : 1.5px;\n"
"border-style:inset;\n"
"border-color: rgb(255, 136, 0);\n"
""));
        pushButton_4 = new QPushButton(GameBoard);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(880, 610, 221, 41));
        pushButton_4->setStyleSheet(QLatin1String("background-color: rgb(33, 150, 243);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"border-width : 1.5px;\n"
"border-style:inset;\n"
"border-color: rgb(255, 136, 0);\n"
""));
        horizontalLayoutWidget = new QWidget(GameBoard);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(290, 600, 551, 91));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(GameBoard);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(70, 50, 111, 31));
        label_17->setFont(font7);
        label_17->setStyleSheet(QStringLiteral("color: rgb(0, 200, 81);"));
        label_18 = new QLabel(GameBoard);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(80, 90, 91, 41));
        label_18->setFont(font7);
        label_18->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        label_19 = new QLabel(GameBoard);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(70, 280, 111, 31));
        label_19->setFont(font7);
        label_19->setStyleSheet(QStringLiteral("color: rgb(245, 121, 0);"));
        label_20 = new QLabel(GameBoard);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(80, 320, 101, 31));
        label_20->setFont(font7);
        label_20->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_21 = new QLabel(GameBoard);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(1020, 50, 111, 31));
        label_21->setFont(font7);
        label_21->setStyleSheet(QStringLiteral("color: rgb(41, 198, 224);"));
        label_37 = new QLabel(GameBoard);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(1030, 290, 101, 31));
        label_37->setFont(font7);
        label_37->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_40 = new QLabel(GameBoard);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(1030, 100, 101, 31));
        label_40->setFont(font7);
        label_40->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_38 = new QLabel(GameBoard);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(1020, 240, 111, 31));
        label_38->setFont(font7);
        label_38->setStyleSheet(QStringLiteral("color: rgb(215, 25, 207);"));
        label_39 = new QLabel(GameBoard);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(970, 510, 181, 61));
        label_39->setFont(font7);
        label_39->setStyleSheet(QStringLiteral("color: rgb(0, 200, 81);"));
        stackedWidget->addWidget(GameBoard);
        WinMenu = new QWidget();
        WinMenu->setObjectName(QStringLiteral("WinMenu"));
        WinMenu->setStyleSheet(QLatin1String("#WinMenu {\n"
"background-color: rgb(38, 50, 56);\n"
"border-color: rgb(255, 136, 0);\n"
"border-width: 3px;\n"
"border-style: solid;\n"
"}"));
        layoutWidget = new QWidget(WinMenu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 1201, 701));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 250, 0, 250);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font12;
        font12.setFamily(QStringLiteral("Open Sans"));
        font12.setPointSize(48);
        font12.setBold(true);
        font12.setWeight(75);
        label_6->setFont(font12);
        label_6->setStyleSheet(QStringLiteral("color: rgb(0, 200, 81);"));

        verticalLayout_5->addWidget(label_6, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        QFont font13;
        font13.setFamily(QStringLiteral("Open Sans"));
        font13.setPointSize(24);
        pushButton_11->setFont(font13);
        pushButton_11->setStyleSheet(QLatin1String("background-color: rgb(51, 181, 229);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"padding-right: 10px;\n"
"padding-left: 10px;\n"
""));

        verticalLayout_5->addWidget(pushButton_11, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        stackedWidget->addWidget(WinMenu);
        LoseMenu = new QWidget();
        LoseMenu->setObjectName(QStringLiteral("LoseMenu"));
        LoseMenu->setStyleSheet(QLatin1String("#LoseMenu {\n"
"background-color: rgb(38, 50, 56);\n"
"border-color: rgb(255, 136, 0);\n"
"border-width: 3px;\n"
"border-style: solid;\n"
"}"));
        verticalLayoutWidget_3 = new QWidget(LoseMenu);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 0, 1191, 701));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 250, 0, 250);
        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font12);
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 68, 68);"));

        verticalLayout_11->addWidget(label_8, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_13 = new QPushButton(verticalLayoutWidget_3);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setFont(font13);
        pushButton_13->setStyleSheet(QLatin1String("background-color: rgb(51, 181, 229);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"padding-right: 10px;\n"
"padding-left: 10px;\n"
"border-color: rgb(0, 200, 81);\n"
"\n"
""));

        verticalLayout_11->addWidget(pushButton_13, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        stackedWidget->addWidget(LoseMenu);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Scrabble", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Crear Partida", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "Unirse a partida", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Nombre del lobby", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt;\">Seleccione la configuraci\303\263n de su lobby</span></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Cantidad de jugadores", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
        );
        label_12->setText(QApplication::translate("MainWindow", "Su nombre", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "Enviar", Q_NULLPTR));
        label_2->setText(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "Regresar", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Regresar", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Ingrese el c\303\263digo del lobby al que desea unirse", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Ingrese su nombre", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Enviar", Q_NULLPTR));
        label_3->setText(QString());
        groupBox->setTitle(QString());
        label_4->setText(QApplication::translate("MainWindow", "Nombre:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Jugador 1", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Desconectado", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Estado:", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_22->setText(QApplication::translate("MainWindow", "Nombre:", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Jugador 2", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Desconectado", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Estado:", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        label_32->setText(QApplication::translate("MainWindow", "Nombre:", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "Jugador 3", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "Desconectado", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "Estado:", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        label_27->setText(QApplication::translate("MainWindow", "Nombre:", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "Jugador 4", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "Desconectado", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "Estado:", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        label_44->setText(QApplication::translate("MainWindow", "Lobby", Q_NULLPTR));
        label_45->setText(QApplication::translate("MainWindow", "NOMBRE", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Empezar", Q_NULLPTR));
        label_43->setText(QString());
        label_41->setText(QApplication::translate("MainWindow", "Codigo lobby", Q_NULLPTR));
        label_42->setText(QApplication::translate("MainWindow", "CODIGO", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "Regresar", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Pasar Turno", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Scrabble!", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Jugador 1", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Puntaje", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Jugador 2", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Puntaje", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Jugador 3", Q_NULLPTR));
        label_37->setText(QApplication::translate("MainWindow", "Puntaje", Q_NULLPTR));
        label_40->setText(QApplication::translate("MainWindow", "Puntaje", Q_NULLPTR));
        label_38->setText(QApplication::translate("MainWindow", "Jugador 4", Q_NULLPTR));
        label_39->setText(QApplication::translate("MainWindow", "Est\303\241 en su turno", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\302\241Has Ganado!", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "Volver al menu principal", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\302\241Has Perdido!", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "Volver al menu principal", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
