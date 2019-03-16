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
        mainmenu.cpp \
    gameboard.cpp \
    createlobbymenu.cpp \
    waitforgamestartmenu.cpp \
    joinlobbymenu.cpp \
    winmenu.cpp \
    losemenu.cpp \
    configlobbymenu.cpp \
    casillagrafica.cpp \
    tablerografico.cpp \
    point.cpp \
    tablerografico.cpp \
    ficha.cpp \
    jugador.cpp

HEADERS += \
        mainmenu.h \
    gameboard.h \
    gameboard.h \
    createlobbymenu.h \
    waitforgamestartmenu.h \
    joinlobbymenu.h \
    winmenu.h \
    losemenu.h \
    configlobbymenu.h \
    casillagrafica.h \
    tablerografico.h \
    point.h \
    perk.h \
    tablerografico.h \
    ficha.h \
    jugador.h

FORMS += \
        mainmenu.ui \
    gameboard.ui \
    createlobbymenu.ui \
    waitforgamestartmenu.ui \
    joinlobbymenu.ui \
    winmenu.ui \
    losemenu.ui \
    configlobbymenu.ui
