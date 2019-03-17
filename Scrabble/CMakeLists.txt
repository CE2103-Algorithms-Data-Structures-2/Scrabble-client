cmake_minimum_required(VERSION 3.13)
project(Scrabble)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Scrabble
        casilla.cpp
        casilla.h
        casillagrafica.cpp
        casillagrafica.h
        configlobbymenu.cpp
        configlobbymenu.h
        createlobby.cpp
        createlobby.h
        createlobbymenu.cpp
        createlobbymenu.h
        ficha.cpp
        ficha.h
        gameboard.cpp
        gameboard.h
        joinlobbymenu.cpp
        joinlobbymenu.h
        jugador.cpp
        jugador.h
        losemenu.cpp
        losemenu.h
        main.cpp
        mainmenu.cpp
        mainmenu.h
        perk.h
        point.cpp
        point.h
        tablerografico.cpp
        tablerografico.h
        waitforgamestartmenu.cpp
        waitforgamestartmenu.h
        waitmenu.cpp
        waitmenu.h
        winmenu.cpp
        winmenu.h
        Client/Client.cpp
        Client/Client.h
        gameboard.ui
        joinlobbymenu.ui
        configlobbymenu.ui
        createlobbymenu.ui
        losemenu.ui
        mainmenu.ui
        waitforgamestartmenu.ui
        winmenu.ui
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
        Structures/WordsList.h)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "PATH_TO_QT/QT_VERSION/QT_ARCH/lib/cmake")

target_link_libraries(Scrabble Qt5::Widgets)

target_link_libraries(Scrabble Qt5::Core)
target_link_libraries(Scrabble Qt5::Widgets)
