cmake_minimum_required(VERSION 3.15) 

set(PROJECT_NAME example) 	 
project("${PROJECT_NAME}")      


set(CMAKE_CXX_STANDARD 17)			
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)


include_directories("inc")


add_executable("${PROJECT_NAME}" laba2.cpp Square.cpp Square.h)

