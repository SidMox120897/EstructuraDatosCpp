#include <iostream>
#include "Lib/order.h"
#include "Lib/order.cpp"
#include "Lib/sort.h"
#include "Lib/sort.cpp"
#include "Lib/bubblesort.h"
#include "Lib/bubblesort.cpp"
#include "Lib/bibubblesort.h"
#include "Lib/bibubblesort.cpp"

using namespace std;


int main(int argc, char const *argv[])
{
    int N=100000;
    std::vector<int> Arr={1,2,3,4,5};
    order<int> Control;
    Control.ImprimirVector(Arr);

    std::vector<int> ArrAsc=Control.createAsceVector(N);
    std::vector<int> ArrDesc=Control.createDescVector(N);
    std::vector<int> ArrRandom=Control.createRandomVector(N);

    // Control.ImprimirVector(ArrAsc);
    // Control.ImprimirVector(ArrDesc);
    // Control.ImprimirVector(ArrRandom);

    bubblesort<int> Bur;
    Bur.measureSortingTime(&sort<int>::sortVector, ArrRandom);
    Bur.ImprimirResultados();
    // Control.ImprimirVector(ArrRandom);


    ArrAsc=Control.createAsceVector(N);
    ArrDesc=Control.createDescVector(N);
    ArrRandom=Control.createRandomVector(N);


    bibubblesort<int> biBur;
    biBur.measureSortingTime(&sort<int>::sortVector, ArrRandom);
    biBur.ImprimirResultados();
    // Control.ImprimirVector(ArrRandom);

    return 0;
}
