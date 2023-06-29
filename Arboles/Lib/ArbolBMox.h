#include <iostream>
#include <queue>

#ifndef ARBOLBMOX_H
#define ARBOLBMOX_H

template <typename any>
class ArbolBMox
{
private:
    any Info;
    ArbolBMox<any>* Izq;
    ArbolBMox<any>* Der;

public:
    ArbolBMox();
    ArbolBMox(any info);
    ~ArbolBMox();
    bool tieneUnHijo();
    bool tieneDosHijos();
    bool noTieneHijos();
    bool esVacio();
    int nroHijos();
    int nroHojas();
    int nroRamas();
    int Altura();
    void insertar(any info);
    void ImprimirRaiz();
    void inOrden();
    void preOrden();
    void postOrden();
    void porNiveles();

private:
    void insertar(any info);
    void inOrden();
    void preOrden();
    void postOrden();
    void porNiveles();
};





#include "ArbolBMox.h"
#endif