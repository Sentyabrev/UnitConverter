cmake_minimum_required(VERSION 3.20)

project("Converter")

set(SOURCES 
    length.h 
    temperature.h 
    weight.h
    length.cpp
    temperature.cpp
    weight.cpp
    main.cpp
)
message(STATUS "список файлов в сборке - ${SOURCES}")

add_executable(converter ${SOURCES})