add_library(GRAFOS SHARED
    node.h
    node.cpp
    edge.h
    edge.cpp
    Graph.h
    Graph.cpp
    DFS.h;
    DFS.cpp;
)

target_include_directories(GRAFOS PUBLIC ${CMAKE_CURRENT_LIST_DIR})

