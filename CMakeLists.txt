cmake_minimum_required(VERSION 3.10)

# Project Name
project(cpp_ml_toolkit)

# Use modern C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include header files
include_directories(include)

# Source files
set(SOURCES
    src/main.cpp
    src/Dataset.cpp
    src/LinearRegression.cpp
)

# Create executable
add_executable(ml_toolkit ${SOURCES})