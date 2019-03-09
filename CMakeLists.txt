cmake_minimum_required(VERSION 3.13)
project(Proyecto_1_Client)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proyecto_1_Client Main/main.cpp Client/Client.cpp Client/Client.h Interface_Logic/Manager.cpp Interface_Logic/Manager.h)