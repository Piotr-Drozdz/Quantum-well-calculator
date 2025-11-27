cmake_minimum_required(VERSION 3.16)

project(QuantumWellGUI VERSION 1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

include_directories(include)

set(SOURCES
    src/main.cpp
    src/mainwindow.cpp
    src/bisekcja.cpp
    src/studnia.cpp
    src/mainwindow.ui
)

add_executable(studnia ${SOURCES})

# dodaj nagłówki z Q_OBJECT do AUTOMOC
target_sources(studnia PRIVATE include/mainwindow.h)

target_link_libraries(studnia PRIVATE Qt6::Widgets)
target_include_directories(studnia PRIVATE ${CMAKE_CURRENT_BINARY_DIR} include)
