add_library(ArbolB SHARED
    ArbolB.h
    ArbolB.cpp
    node.h)

target_include_directories(ArbolB PUBLIC ${CMAKE_CURRENT_LIST_DIR})

