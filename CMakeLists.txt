cmake_minimum_required(VERSION 3.20)

project("Converter" VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SOURCES 
    length.h
    temperature.h
    weight.h
    length.cpp
    temperature.cpp
    weight.cpp
    main.cpp)


if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
    message(STATUS "Тип сборки не задан, используется Debug")
else()
    message(STATUS "Тип сборки: ${CMAKE_BUILD_TYPE}")
endif()

message(STATUS "Компилятор ${CMAKE_CXX_COMPILER_ID}: ${CMAKE_CXX_COMPILER} v${CMAKE_CXX_COMPILER_VERSION}")

message(STATUS "список файлов в сборке - ${SOURCES}")


add_executable(converter ${SOURCES})