#include <vector>
#include "Graph.h"

#ifndef DFS_H
#define DFS_H


class DFS
{
private:
    std::vector<bool> Vbool;
public:
    DFS(/* args */);
    ~DFS();
    void DFSImprimir(Graph G, node* Ni);
    void DFSRecord(Graph G, node* Ni);
    void BuscarElemento(Graph G, node Ni, int X);

};

#endif
