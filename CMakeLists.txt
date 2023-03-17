cmake_minimum_required(VERSION 3.23)
project(exampleMVC)

set(CMAKE_CXX_STANDARD 17)

add_executable(exampleMVC main.cpp gameController.cpp gameController.h gameModel.cpp gameModel.h gameView.cpp gameView.h)
