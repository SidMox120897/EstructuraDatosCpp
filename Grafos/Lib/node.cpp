#include "node.h"


#ifndef NODE_CPP
#define NODE_CPP

node::node()
{
}

node::node(std::string Nombre, int weight)
{
    this->Nombre=Nombre;
    this->weight=weight;
}

std::string node::get_Nombre(){
    return this->Nombre;
}

int node::get_peso(){
    return this->weight;
}

node::~node()
{
}

void node::Imprimir(){
    std::cout<<this->Nombre<<":"<<this->weight<<std::endl;
}

#endif