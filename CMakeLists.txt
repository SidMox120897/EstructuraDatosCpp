#Crear carpeta Build
#Ejecutar "cmake .." sin comillas XD dentro de carpeta Build
# cualquier ejecucion cmake y make sera en build

#controlamos versiones
cmake_minimum_required(VERSION 3.10)


#ponemos nombre de proyecto 
project(Estructura VERSION 1.0)


#Que standar de C++ se planea utilizar
# C++98
# C++11
# C++14
# C++17 -->  V. 3.8 de cmake
# C++20
# C++23
set(CMAKE_CXX_STANDARD 11)

#si es necesario activar el uso de el standar
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Configuración para la carpeta de salida de compilación
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)


set(ArbolDir ${CMAKE_SOURCE_DIR}/Arboles)
set(ArLib ${ArbolDir}/Lib)


#Ordenamiento
set(OrdenamientoDir ${CMAKE_SOURCE_DIR}/Ordenamiento)
set(OrderLib ${OrdenamientoDir}/Lib)


#Grafos
set(GrafosDir ${CMAKE_SOURCE_DIR}/Grafos)
set(GrafosLib ${GrafosDir}/Lib)


add_subdirectory(${ArLib})
add_subdirectory(${OrderLib})
add_subdirectory(${GrafosLib})


#Se Agrega una ejecucion al projecto Tutorial
add_executable(ArMox
    ${ArbolDir}/main.cpp
    )

#Se Agrega una ejecucion al projecto Ordenamiento
add_executable(OrderMox
    ${OrdenamientoDir}/main.cpp
    )

#Se Agrega una ejecucion al projecto Ordenamiento
add_executable(GrafosMox
    ${GrafosDir}/main.cpp
    )


target_link_libraries(ArMox ArbolB)
target_link_libraries(OrderMox OrderAll)
target_link_libraries(GrafosMox GRAFOS)