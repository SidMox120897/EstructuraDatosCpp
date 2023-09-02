#include <iostream>
#include <queue>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>

#ifndef SORT_H
#define SORT_H

using namespace std;
using namespace std::chrono;

template <typename any>
class sort
{
public:
    long int NroIter;
    long int NroSwap;
    long long time; /*micros*/

public:
    sort();
    ~sort();
    void descendente(int A, int B);
    void ascendente(int A, int B);
    void measureSortingTime(void (sort<any>::*sortingAlgorithm)(std::vector<any>&), std::vector<any>& arr);
    void ImprimirResultados();
    //virtual
    virtual void sortVector(std::vector<any>& Arr);
};


#endif