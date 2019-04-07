cmake_minimum_required(VERSION 3.9)
project(ScrabbleClient)

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
set(CMAKE_AUTOUIC_SEARCH_PATHS ${PROJECT_SOURCE_DIR})
set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(Threads REQUIRED)
find_package(Qt5Widgets)
find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Boost)

add_executable(ScrabbleClient
        Client/Client.h
        Client/Client.cpp
        Interface_Logic/Board_Logic/Box.h
        Interface_Logic/Board_Logic/Box.cpp
        Interface_Logic/Board_Logic/Chip.h
        Interface_Logic/Board_Logic/Chip.cpp
        Interface_Logic/Board_Logic/Matrix.h
        Interface_Logic/Board_Logic/Matrix.cpp
        Interface_Logic/JSON_Logic/JSONManager.h
        Interface_Logic/JSON_Logic/JSONManager.cpp
        Interface_Logic/Logic_Windows/JoinGame_LW.h
        Interface_Logic/Logic_Windows/JoinGame_LW.cpp
        Interface_Logic/Logic_Windows/LogicWindow.h
        Interface_Logic/Logic_Windows/LogicWindow.cpp
        Interface_Logic/Logic_Windows/NewGame_LW.h
        Interface_Logic/Logic_Windows/NewGame_LW.cpp
        Interface_Logic/Manager/Manager.h
        Interface_Logic/Manager/Manager.cpp
        Interface_Logic/Player/Player.h
        Interface_Logic/Player/Player.cpp
        main.cpp
        Structures/BoxList.h
        Structures/BoxList.cpp
        Structures/NodeP.h
        Structures/NodeP.cpp
        Structures/NodeW.h
        Structures/NodeW.cpp
        Structures/PlayerList.h
        Structures/PlayerList.cpp
        Structures/WordsList.h
        Structures/WordsList.cpp
        mainwindow.h
        mainwindow.cpp
        tilelabel.cpp
        tilelabel.h
        mainwindow.ui Interface_Logic/Board_Logic/CasillaGrafica.cpp Interface_Logic/Board_Logic/CasillaGrafica.h Interface_Logic/Board_Logic/FichaGrafica.cpp Interface_Logic/Board_Logic/FichaGrafica.h Interface_Logic/Board_Logic/Bonus.h Structures/SearchList.cpp Structures/SearchList.h)

target_link_libraries(${PROJECT_NAME} Threads::Threads)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
target_link_libraries(${PROJECT_NAME} Qt5::Core)
target_link_libraries(${PROJECT_NAME} Qt5::Gui)