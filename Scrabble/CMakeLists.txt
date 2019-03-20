cmake_minimum_required(VERSION 3.13)
project(Scrabble)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Scrabble
        GameLogic/casillagrafica.cpp
        GameLogic/casillagrafica.h
        GameLogic/ficha.cpp
        GameLogic/ficha.h
        GameLogic/gameboard.cpp
        GameLogic/gameboard.h
        GameLogic/perk.h
        GameLogic/point.cpp
        GameLogic/point.h
        GameLogic/tablerografico.cpp
        GameLogic/tablerografico.h
        Client/Client.cpp
        Client/Client.h
        JSON_Logic/JSONManager.cpp
        JSON_Logic/JSONManager.h
        Logic_Windows/JoinGame_LW.cpp
        Logic_Windows/JoinGame_LW.h
        Logic_Windows/LogicWindow.cpp
        Logic_Windows/LogicWindow.h
        Logic_Windows/NewGame_LW.cpp
        Logic_Windows/NewGame_LW.h
        Manager/Manager.cpp
        Manager/Manager.h
        Player/Player.cpp
        Player/Player.h
        Structures/NodeP.cpp
        Structures/NodeP.h
        Structures/NodeW.cpp
        Structures/NodeW.h
        Structures/PlayerList.cpp
        Structures/PlayerList.h
        Structures/WordsList.cpp
        Structures/WordsList.h
        Gui/configlobbymenu.cpp
        Gui/configlobbymenu.h
        Gui/createlobby.cpp
        Gui/createlobby.h
        Gui/createlobbymenu.cpp
        Gui/createlobbymenu.h
        Gui/joinlobbymenu.cpp
        Gui/joinlobbymenu.h
        Gui/losemenu.cpp
        Gui/losemenu.h
        Gui/waitforgamestartmenu.h
        Gui/waitforgamestartmenu.cpp
        Gui/waitmenu.cpp
        Gui/waitmenu.h
        Gui/winmenu.cpp
        Gui/winmenu.h
        Gui/mainmenu.cpp
        Gui/mainmenu.h
        gameboard.ui
        joinlobbymenu.ui
        configlobbymenu.ui
        createlobbymenu.ui
        losemenu.ui
        mainmenu.ui
        waitforgamestartmenu.ui
        winmenu.ui
        main.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(Qt5Widgets)

include_directories(${Qt5Widgets_INCLUDE_DIRS})

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "PATH_TO_QT/QT_VERSION/QT_ARCH/lib/cmake")

#add_executable(Scrabble main.cpp mainmenu.h.cpp mainmenu.h.h qml.qrc)

target_link_libraries(Scrabble Qt5::Widgets)

target_link_libraries(Scrabble Qt5::Core)
target_link_libraries(Scrabble Qt5::Widgets)
