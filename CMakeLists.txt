# CMake version

cmake_minimum_required(VERSION 3.0)



# Project name

project(proiect1daniela)



# Define the search path for header files

include_directories(includes)



# Specify the required C++ standard

if(CMAKE_VERSION GREATER "3.1.2") 

    set(CMAKE_CXX_STANDARD 14)

    set(CMAKE_CXX_STANDARD_REQUIRED ON)

    set(CMAKE_CXX_EXTENSIONS OFF)

else()

    if(CMAKE_COMPILER_IS_GNUCXX)

        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

    endif()    

endif()    



# Define the executable

add_executable(${PROJECT_NAME} 

               includes/proiect1_config.hpp 
               includes/Home.hpp 
               includes/House.hpp
               includes/Apartment.hpp
               includes/Renter.hpp
               includes/Room.hpp
               includes/LockRoom.hpp
               src/main.cpp
               src/Home.cpp
               src/House.cpp
               src/Apartment.cpp
               src/Renter.cpp
               src/Room.cpp
               src/LockRoom.cpp)