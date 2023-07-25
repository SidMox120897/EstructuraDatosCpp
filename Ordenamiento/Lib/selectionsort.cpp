#include "selectionsort.h"

#ifndef SELECTIONSORT_CPP
#define SELECTIONSORT_CPP

template <typename any>
selectionsort<any>::selectionsort(/* args */)
{
}

template <typename any>
selectionsort<any>::~selectionsort()
{
}

template <typename any>
void selectionsort<any>::sortVector(std::vector<any>& Arr) {
    int n = Arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            this->NroIter++;
            if (Arr[j] < Arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(Arr[i], Arr[minIndex]);
        this->NroSwap++;
    }
}

#endif