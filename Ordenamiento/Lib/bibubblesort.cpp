#include "bibubblesort.h"

#ifndef BIBUBBLESORT_CPP
#define BIBUBBLESORT_CPP

template <typename any>
bibubblesort<any>::bibubblesort(/* args */)
{
}

template <typename any>
bibubblesort<any>::~bibubblesort()
{
}

template <typename any>
void bibubblesort<any>::sortVector(std::vector<any>& Arr) {
    int left = 0;
    int right = Arr.size() - 1;
    bool swapped;

    do {
        swapped = false;

        // Mover elementos grandes a la derecha
        for (int i = left; i < right; i++) {
            this->NroIter++;
            if (Arr[i] > Arr[i + 1]) {
                std::swap(Arr[i], Arr[i + 1]);
                this->NroSwap++;
                swapped = true;
            }
        }
        right--;

        // Mover elementos pequeños a la izquierda
        for (int i = right; i > left; i--) {
            this->NroIter++;
            if (Arr[i - 1] > Arr[i]) {
                std::swap(Arr[i - 1], Arr[i]);
                this->NroSwap++;
                swapped = true;
            }
        }
        left++;
    } while (swapped);
}


#endif