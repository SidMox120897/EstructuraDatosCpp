add_library(ArbolB SHARED
    ArbolB.h
    ArbolB.cpp
    ArbolBMox.h
    ArbolBMox.cpp
    node.h)

target_include_directories(ArbolB PUBLIC ${CMAKE_CURRENT_LIST_DIR})

