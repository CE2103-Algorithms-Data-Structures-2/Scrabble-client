#-------------------------------------------------
#
# Project created by QtCreator 2019-03-15T13:28:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Scrabble
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
        main.cpp \
    Client/Client.cpp \
    Board_Logic/Box.cpp \
    JSON_Logic/JSONManager.cpp \
    Logic_Windows/JoinGame_LW.cpp \
    Logic_Windows/LogicWindow.cpp \
    Logic_Windows/NewGame_LW.cpp \
    Manager/Manager.cpp \
    Player/Player.cpp \
    Structures/NodeP.cpp \
    Structures/NodeW.cpp \
    Structures/PlayerList.cpp \
    Structures/WordsList.cpp \
    Gui/configlobbymenu.cpp \
    Gui/createlobby.cpp \
    Gui/createlobbymenu.cpp \
    Gui/joinlobbymenu.cpp \
    Gui/losemenu.cpp \
    Gui/mainmenu.cpp \
    Gui/waitforgamestartmenu.cpp \
    Gui/waitmenu.cpp \
    Gui/winmenu.cpp \
    GameLogic/casillagrafica.cpp \
    GameLogic/ficha.cpp \
    GameLogic/gameboard.cpp \
    GameLogic/point.cpp \
    GameLogic/tablerografico.cpp \
    mainwindow.cpp

HEADERS += \
    Client/Client.h \
    Board_Logic/Box.h \
    JSON_Logic/JSONManager.h \
    Logic_Windows/JoinGame_LW.h \
    Logic_Windows/LogicWindow.h \
    Logic_Windows/NewGame_LW.h \
    Manager/Manager.h \
    Player/Player.h \
    Structures/NodeP.h \
    Structures/NodeW.h \
    Structures/PlayerList.h \
    Structures/WordsList.h \
    Gui/configlobbymenu.h \
    Gui/createlobby.h \
    Gui/createlobbymenu.h \
    Gui/joinlobbymenu.h \
    Gui/losemenu.h \
    Gui/mainmenu.h \
    Gui/waitforgamestartmenu.h \
    Gui/waitmenu.h \
    Gui/winmenu.h \
    GameLogic/casillagrafica.h \
    GameLogic/ficha.h \
    GameLogic/gameboard.h \
    GameLogic/perk.h \
    GameLogic/point.h \
    GameLogic/tablerografico.h \
    mainwindow.h

FORMS += \
    gameboard.ui \
    waitforgamestartmenu.ui \
    joinlobbymenu.ui \
    winmenu.ui \
    losemenu.ui \
    mainmenu.ui \
    configlobbymenu.ui \
    mainwindow.ui

CONFIG += c++11
