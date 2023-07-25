#include "shellsort.h"

#ifndef SHELLSORT_CPP
#define SHELLSORT_CPP

template <typename any>
shellsort<any>::shellsort(/* args */)
{
}

template <typename any>
shellsort<any>::~shellsort()
{
}

template <typename any>
void shellsort<any>::sortVector(std::vector<any>& Arr) {
    int n = Arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            any temp = Arr[i];
            int j;
            for (j = i; j >= gap && Arr[j - gap] > temp; j -= gap) {
                Arr[j] = Arr[j - gap];
                this->NroIter++;
                this->NroSwap++;
            }
            Arr[j] = temp;
            this->NroSwap++;
        }
    }
}


#endif