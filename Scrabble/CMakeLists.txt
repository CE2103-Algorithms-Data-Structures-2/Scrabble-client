cmake_minimum_required(VERSION 3.9)
project(Scrabble)

include_directories(.)
include_directories(${Qt5Widgets_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -pthread")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "PATH_TO_QT/QT_VERSION/QT_ARCH/lib/cmake")
set(CMAKE_AUTOUIC_SEARCH_PATHS /home/david/Documents/Scrabble-client/Scrabble)

find_package(Qt5Widgets)
find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)

add_executable(Scrabble
        Board_Logic/Box.cpp
        Board_Logic/Box.h
        Client/Client.cpp
        Client/Client.h
        GameLogic/casillagrafica.cpp
        GameLogic/casillagrafica.h
        GameLogic/ficha.cpp
        GameLogic/ficha.h
        GameLogic/perk.h
        GameLogic/point.cpp
        GameLogic/point.h
        GameLogic/tablerografico.h
        GameLogic/tablerografico.cpp
        Gui/configlobbymenu.cpp
        Gui/configlobbymenu.h
        Gui/joinlobbymenu.cpp
        Gui/joinlobbymenu.h
        Gui/losemenu.cpp
        Gui/losemenu.h
        Gui/mainmenu.cpp
        Gui/mainmenu.h
        Gui/waitforgamestartmenu.cpp
        Gui/waitforgamestartmenu.h
        Gui/waitmenu.cpp
        Gui/waitmenu.h
        Gui/winmenu.cpp
        Gui/winmenu.h
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
        Player/Player.h
        Player/Player.cpp
        Structures/NodeP.cpp
        Structures/NodeP.h
        Structures/NodeW.cpp
        Structures/NodeW.h
        Structures/PlayerList.cpp
        Structures/PlayerList.h
        Structures/WordsList.cpp
        Structures/WordsList.h
        configlobbymenu.ui
        createlobbymenu.ui
        joinlobbymenu.ui
        losemenu.ui
        mainmenu.ui
        waitforgamestartmenu.ui
        winmenu.ui
        main.cpp)

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
target_link_libraries(${PROJECT_NAME} Qt5::Core)
target_link_libraries(${PROJECT_NAME} Qt5::Gui)

