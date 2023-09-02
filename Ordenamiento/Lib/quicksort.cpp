#include "quicksort.h"

#ifndef QUICKSORT_H
#define QUICKSORT_H

template <typename any>
quicksort<any>::quicksort(/* args */)
{
}

template <typename any>
quicksort<any>::~quicksort()
{
}

template <typename any>
void QuickSort<any>::sortVector(std::vector<any>& Arr) {
    int n = Arr.size();
    quickSort(Arr, 0, n - 1);
}

template <typename any>
void QuickSort<any>::quickSort(std::vector<any>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

template <typename any>
int QuickSort<any>::partition(std::vector<any>& arr, int low, int high) {
    any pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        this->NroIter++;
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
            this->NroSwap++;
        }
    }
    std::swap(arr[i + 1], arr[high]);
    this->NroSwap++;
    return i + 1;
}

#endif