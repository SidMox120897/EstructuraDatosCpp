#include "node.h"
#include "edge.h"
#include <vector>
#include <queue>

#ifndef GRAPH_H
#define GRAPH_H

class Graph
{
private:
    std::vector<node*> Nodos;
    std::vector<edge*> Aristas;
public:
    Graph();
    ~Graph();
    std::vector<node*> get_Nodos();
    std::vector<edge*> get_Aristas();

    void AddNodo(node* N);
    void AddArista(edge* E);
    void ImprimirAristas();
    void ImpimirNodos();
    std::vector<std::vector<int>> MatrizDeAdya();
    std::vector<std::vector<int>> MatrizDeAdyaPeso();
    std::vector<std::vector<int>> MatrizDeInci();
    std::vector<std::vector<int>> MatrizDeInciPeso();
    std::vector<edge*> BuscarAristasInicio(node* node);
    void BFS(node* Ini);    //Anchura

    int BuscarNode(node* N);
    int BuscarArista(edge* E);

};

#endif