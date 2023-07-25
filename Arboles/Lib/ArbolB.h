#include <iostream>
#include "node.h"
#include <queue>


#ifndef ARBOLB_H
#define ARBOLB_H

template <typename any>
class ArbolB
{
public:
    nodeT<any>* root;
public:
    ArbolB();
    ArbolB(any info);
    ~ArbolB();
    void insertarABBO(any info);
    void insertarABB(any info);
    void ImprimirRaiz();
    int Max(int A, int B);
    int nroHijos();
    int nroHojas();
    int nroRamas();
    int Altura();
    void inOrden();
    void preOrden();
    void postOrden();
    void porNiveles();

private:
    void insertarABBO(nodeT<any>*& R, any info);
    void insertarABB(nodeT<any>*& R, any info);
    void inOrden(nodeT<any>* node);
    void preOrden(nodeT<any>* node);
    void postOrden(nodeT<any>* node);
    void porNiveles(nodeT<any>* node);
    int nroHijos(nodeT<any>* node);
    int nroHojas(nodeT<any>* node);
    int nroRamas(nodeT<any>* node);
    int Altura(nodeT<any>* node);
};

#endif
