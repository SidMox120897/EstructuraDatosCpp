#include "mergesort.h"

#ifndef MERGESORT_CPP
#define MERGESORT_CPP

template <typename any>
mergesort<any>::mergesort(/* args */)
{
}

template <typename any>
mergesort<any>::~mergesort()
{
}

template <typename any>
void mergesort<any>::sortVector(std::vector<any>& Arr) {
    int n = Arr.size();
    for (int currSize = 1; currSize <= n - 1; currSize = 2 * currSize) {
        for (int leftStart = 0; leftStart < n - 1; leftStart += 2 * currSize) {
            int mid = std::min(leftStart + currSize - 1, n - 1);
            int rightEnd = std::min(leftStart + 2 * currSize - 1, n - 1);
            merge(Arr, leftStart, mid, rightEnd);
        }
    }
}

template <typename any>
void mergesort<any>::merge(std::vector<any>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<any> L(n1);
    std::vector<any> R(n2);

    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
        this->NroIter++;
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
        this->NroIter++;
    }

    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            this->NroSwap++;
            i++;
        } else {
            arr[k] = R[j];
            this->NroSwap++;
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        this->NroSwap++;
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        this->NroSwap++;
        j++;
        k++;
    }    
}


#endif