#include "sort.h"


#ifndef SORT_CPP
#define SORT_CPP

template <typename any>
sort<any>::sort(/* args */)
{
    this->NroIter=0;
    this->NroSwap=0;
    this->time=0;
}

template <typename any>
sort<any>::~sort()
{
}

template <typename any>
void sort<any>::descendente(int A, int B){
    int Aux=A;
    if( A < B){
        A=B;
        B=Aux;
        this->NroSwap++;
    }
}

template <typename any>
void sort<any>::ascendente(int A, int B){
    int Aux=A;
    if( A > B){
        A=B;
        B=Aux;
        this->NroSwap++;
    }
}

// Método para medir el tiempo de ejecución de un algoritmo de ordenamiento
template <typename any>
void sort<any>::measureSortingTime(void (sort<any>::*sortingAlgorithm)(std::vector<any>&), std::vector<any>& arr) {
    auto start = high_resolution_clock::now(); // Tiempo de inicio
    (this->*sortingAlgorithm)(arr); // Llama al algoritmo de ordenamiento
    auto stop = high_resolution_clock::now(); // Tiempo de finalización
    auto duration = duration_cast<microseconds>(stop - start); // Tiempo transcurrido en microsegundos
    this->time=duration.count();
//    std::cout << "Tiempo de ejecucion: " << duration.count() << " microsegundos" << std::endl;
}

template <typename any>
void sort<any>::ImprimirResultados() {
    std::cout << "Tiempo de ejecucion: " << this->time << " microsegundos" << std::endl;
    std::cout << "Numero de iteraciones: " << this->NroIter << std::endl;
    std::cout << "Numero de swaps: " << this->NroSwap << std::endl;
}

template <typename any>
void sort<any>::sortVector(std::vector<any>& Arr) {
}

#endif