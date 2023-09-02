add_library(OrderAll SHARED
    order.h
    order.cpp
    sort.h
    sort.cpp
    bubblesort.h
    bubblesort.cpp
    bibubblesort.h
    bibubblesort.cpp
    bucketsort.h
    bucketsort.cpp
    insertionsort.h
    insertionsort.cpp
    mergesort.h
    mergesort.cpp
    quicksort.h
    quicksort.cpp
    radixsort.h
    radixsort.cpp
    selectionsort.h
    selectionsort.cpp
    shellsort.h
    shellsort.cpp
    )

target_include_directories(OrderAll PUBLIC ${CMAKE_CURRENT_LIST_DIR})

