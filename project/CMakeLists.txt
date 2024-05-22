cmake_minimum_required(VERSION 3.27)
project(project)

set(CMAKE_CXX_STANDARD 17)

add_executable(project main.cpp
        Game.h
        Ship.h
        Destroyer.h
        Hunter.cpp
        Cruiser.h
        Game.cpp
        Player.cpp
)
