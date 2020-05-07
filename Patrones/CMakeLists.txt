cmake_minimum_required(VERSION 3.5)

project(Patrones LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5Core)

add_executable(Patrones
  main.cpp
  vuelo.hpp
  vuelo.cpp
  pasajeros.hpp
  pasajeros.cpp
  observador.cpp
  observador.hpp
  Lista.hpp
  Nodo.hpp
)
target_link_libraries(Patrones Qt5::Core)
