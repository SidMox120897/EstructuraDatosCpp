#include "radixsort.h"

#ifndef RADIXSORT_CPP
#define RADIXSORT_CPP


template <typename any>
radixsort<any>::radixsort(/* args */)
{
}

template <typename any>
radixsort<any>::~radixsort()
{
}

template <typename any>
void radixsort<any>::sortVector(std::vector<any>& Arr)
{
    if (Arr.empty()) {
        return;
    }

    any max = *std::max_element(Arr.begin(), Arr.end());
    for (any exp = 1; max / exp > 0; exp *= 10) {
        std::vector<any> output(Arr.size());
        std::array<int, 10> count = {0};

        for (size_t i = 0; i < Arr.size(); i++) {
            count[(Arr[i] / exp) % 10]++;
            this->NroIter++;
        }

        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        for (int i = Arr.size() - 1; i >= 0; i--) {
            output[count[(Arr[i] / exp) % 10] - 1] = Arr[i];
            count[(Arr[i] / exp) % 10]--;
            this->NroSwap++;
        }

        Arr = output;
    }
}

#endif
