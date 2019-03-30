#-------------------------------------------------
#
# Project created by QtCreator 2019-03-29T18:01:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ScrabbleClient
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        mainwindow.cpp \
    Client/Client.cpp \
    Interface_Logic/Board_Logic/Box.cpp \
    Interface_Logic/Board_Logic/Chip.cpp \
    Interface_Logic/Board_Logic/Matrix.cpp \
    Interface_Logic/JSON_Logic/JSONManager.cpp \
    Interface_Logic/Logic_Windows/JoinGame_LW.cpp \
    Interface_Logic/Logic_Windows/LogicWindow.cpp \
    Interface_Logic/Logic_Windows/NewGame_LW.cpp \
    Interface_Logic/Manager/Manager.cpp \
    Interface_Logic/Player/Player.cpp \
    Main/main.cpp \
    Structures/BoxList.cpp \
    Structures/NodeP.cpp \
    Structures/NodeW.cpp \
    Structures/PlayerList.cpp \
    Structures/WordsList.cpp \
    mainwindow.cpp

HEADERS += \
        mainwindow.h \
    Client/Client.h \
    Interface_Logic/Board_Logic/Box.h \
    Interface_Logic/Board_Logic/Chip.h \
    Interface_Logic/Board_Logic/Matrix.h \
    Interface_Logic/JSON_Logic/JSONManager.h \
    Interface_Logic/Logic_Windows/JoinGame_LW.h \
    Interface_Logic/Logic_Windows/LogicWindow.h \
    Interface_Logic/Logic_Windows/NewGame_LW.h \
    Interface_Logic/Manager/Manager.h \
    Interface_Logic/Player/Player.h \
    Structures/BoxList.h \
    Structures/NodeP.h \
    Structures/NodeW.h \
    Structures/PlayerList.h \
    Structures/WordsList.h \
    mainwindow.h

FORMS += \
        mainwindow.ui

DISTFILES += \
    Client/include.pri
