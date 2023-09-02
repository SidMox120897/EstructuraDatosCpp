#include <iostream>
#include <string>


#ifndef NODE_H
#define NODE_H

class node
{
private:
    std::string Nombre;
    int weight;
public:
    node();
    node(std::string Nombre, int weight);
    std::string get_Nombre();
    int get_peso();

    ~node();
    void Imprimir();
};

#endif