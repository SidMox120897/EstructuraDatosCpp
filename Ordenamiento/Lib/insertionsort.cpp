#include "insertionsort.h"

#ifndef INSERTIONSORT_CPP
#define INSERTIONSORT_CPP

template <typename any>
insertionsort<any>::insertionsort(/* args */)
{
}

template <typename any>
insertionsort<any>::~insertionsort()
{
}

template <typename any>
void insertionsort<any>::sortVector(std::vector<any>& Arr) {
    int n = Arr.size();
    for (int i = 1; i < n; i++) {
        any key = Arr[i];
        int j = i - 1;

        while (j >= 0 && Arr[j] > key) {
            Arr[j + 1] = Arr[j];
            this->NroIter++;
            this->NroSwap++;
            j--;
        }
        Arr[j + 1] = key;
        this->NroSwap++;
    }
}

#endif