#include <iostream>
#include <queue>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>

#include "sort.h"

#ifndef ORDER_H
#define ORDER_H

using namespace std;
using namespace std::chrono;


template <typename any>
class order
{
private:
    /*Atributos*/

public:
    order();
    ~order();
    std::vector<any> createRandomVector(int size);
    std::vector<any> createDescVector(int size);
    std::vector<any> createAsceVector(int size);
    void ImprimirVector(std::vector<int> Arr);
};


#endif