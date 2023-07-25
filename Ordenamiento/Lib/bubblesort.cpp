#include "bubblesort.h"

#ifndef BUBBLESORT_CPP
#define BUBBLESORT_CPP

template <typename any>
bubblesort<any>::bubblesort(/* args */)
{
}

template <typename any>
bubblesort<any>::~bubblesort()
{
}

template <typename any>
void bubblesort<any>::sortVector(std::vector<any>& Arr) {
    int n = Arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            this->NroIter++;
            if (Arr[j] > Arr[j + 1]) {
                std::swap(Arr[j], Arr[j + 1]);
                this->NroSwap++;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

#endif