cmake_minimum_required(VERSION 3.13)
project(Proyecto_1_Client)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proyecto_1_Client Main/main.cpp Client/Client.cpp Client/Client.h Interface_Logic/Manager/Manager.cpp Interface_Logic/Manager/Manager.h Interface_Logic/JSON_Logic/JSONManager.cpp Interface_Logic/JSON_Logic/JSONManager.h Interface_Logic/Logic_Windows/NewGame_LW.cpp Interface_Logic/Logic_Windows/NewGame_LW.h Interface_Logic/Logic_Windows/JoinGame_LW.cpp Interface_Logic/Logic_Windows/JoinGame_LW.h Interface_Logic/Logic_Windows/LogicWindow.cpp Interface_Logic/Logic_Windows/LogicWindow.h Interface_Logic/Player/Player.cpp Interface_Logic/Player/Player.h Structures/WordsList.cpp Structures/WordsList.h Structures/NodeW.cpp Structures/NodeW.h Structures/PlayerList.cpp Structures/PlayerList.h Structures/NodeP.cpp Structures/NodeP.h Interface_Logic/Board_Logic/Box.cpp Interface_Logic/Board_Logic/Box.h Interface_Logic/Board_Logic/Chip.cpp Interface_Logic/Board_Logic/Chip.h Interface_Logic/Board_Logic/Matrix.cpp Interface_Logic/Board_Logic/Matrix.h Structures/BoxList.cpp Structures/BoxList.h)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(Proyecto_1_Client Threads::Threads)

set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(Boost)
