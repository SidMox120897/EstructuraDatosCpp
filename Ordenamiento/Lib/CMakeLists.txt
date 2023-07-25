add_library(OrderAll SHARED
    order.h
    order.cpp
    sort.h
    sort.cpp
    bubblesort.h
    bubblesort.cpp
    bibubblesort.h
    bibubblesort.cpp
    )

target_include_directories(OrderAll PUBLIC ${CMAKE_CURRENT_LIST_DIR})

