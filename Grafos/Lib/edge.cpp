#include "edge.h"

#ifndef EDGE_CPP
#define EDGE_CPP

edge::edge(/* args */)
{
}

edge::edge(std::string Nombre, int weight,node* Inicial,node* Final)
{
    this->Inicial=Inicial;
    this->Final=Final;
    this->Nombre=Nombre;
    this->weight=weight;
}


edge::~edge()
{
}


node* edge::get_Inicial(){
    return this->Inicial;
}
node* edge::get_Final(){
    return this->Final;
}

int edge::get_peso(){
    return this->weight;
}

void edge::Imprimir()
{
    std::cout
    <<this->Nombre<<":"
    <<this->Inicial->get_Nombre()
    <<"-->"
    <<this->weight
    <<"-->"
    <<this->Final->get_Nombre()
    <<std::endl;
}


#endif