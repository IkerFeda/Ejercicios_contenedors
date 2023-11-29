cmake_minimum_required(VERSION 3.26)
project(Ejercicios_contenedors)

set(CMAKE_CXX_STANDARD 14)
set(BOOST_ROOT "<C:/Users/ikerf/OneDrive/Documentos/Boost/boost_1_83_0>")
find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
target_link_libraries(Ejercicios_contenedors ${Boost_LIBRARIES})

add_executable(Ejercicios_contenedors
        valarray.cpp
        secuencias.cpp
        vectores.cpp
        algoritmos.cpp
        lambda.cpp
        Boost.cpp)
