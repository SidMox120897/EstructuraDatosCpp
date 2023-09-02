#include "node.h"


#ifndef EDGE_H
#define EDGE_H


class edge
{
private:
    node* Inicial; //Es el nodo inicial de mi Arista
    node* Final; //Es el nodo Final de mi Arista
    std::string Nombre;
    int weight;

public:
    edge(/* args */);
    edge(std::string Nombre, int weight,node* Inicial,node* Final);
    ~edge();
    node* get_Inicial();
    node* get_Final();
    int get_peso();
    void Imprimir();
};

#endif