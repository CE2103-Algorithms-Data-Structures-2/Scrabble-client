cmake_minimum_required(VERSION 3.13)
project(Proyecto_1_Client)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proyecto_1_Client Main/main.cpp Client/Client.cpp Client/Client.h Interface_Logic/Manager/Manager.cpp Interface_Logic/Manager/Manager.h Interface_Logic/JSON_Logic/JSONManager.cpp Interface_Logic/JSON_Logic/JSONManager.h Interface_Logic/Logic_Windows/NewGame_W.cpp Interface_Logic/Logic_Windows/NewGame_W.h)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(Proyecto_1_Client Threads::Threads)

set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(Boost)
