#include "order.h"

template <typename any>
order<any>::order(/* args */)
{
}

template <typename any>
order<any>::~order()
{
}

template <typename any>
std::vector<any> order<any>::createRandomVector(int size) {
    std::vector<any> vec(size);
    for (int i = 0; i < size; i++) {
        vec[i] = static_cast<any>(rand() % 100); // Genera valores aleatorios entre 0 y 99
    }
    return vec;
}

template <typename any>
std::vector<any> order<any>::createAsceVector(int size) {
    std::vector<any> vec(size);
    int i=0;
    while (i<size)
    {
        vec[i]=i;
        i++;
    }
    return vec;
}

template <typename any>
std::vector<any> order<any>::createDescVector(int size) {
    std::vector<any> vec(size);
    int i=0;
    while (size>0)
    {
        vec[i]=size-1;
        i++;
        size--;
    }
    return vec;
}

template <typename any>
void order<any>::ImprimirVector(std::vector<int> Arr){
    for (int valor : Arr) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;
}



//https://github.com/gbaudino/MetodosDeOrdenamiento
//https://www.geeksforgeeks.org/virtual-function-cpp/
