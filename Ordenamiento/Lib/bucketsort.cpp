#include "bucketsort.h"

#ifndef BUCKETSORT_CPP
#define BUCKETSORT_CPP

template <typename any>
bucketsort<any>::bucketsort(/* args */)
{
}

template <typename any>
bucketsort<any>::~bucketsort()
{
}

template <typename any>
void bucketsort<any>::sortVector(std::vector<any>& Arr) {
    if (Arr.empty()) {
        return;
    }

    any max = *std::max_element(Arr.begin(), Arr.end());
    any min = *std::min_element(Arr.begin(), Arr.end());
    size_t bucketCount = (max - min) / Arr.size() + 1;

    std::vector<std::vector<any>> buckets(bucketCount);

    for (size_t i = 0; i < Arr.size(); i++) {
        buckets[(Arr[i] - min) / Arr.size()].push_back(Arr[i]);
    }

    size_t index = 0;
    for (size_t i = 0; i < bucketCount; i++) {
        std::qsort(buckets[i].begin(), buckets[i].end());
        for (size_t j = 0; j < buckets[i].size(); j++) {
            Arr[index++] = buckets[i][j];
            this->NroSwap++;
            this->NroIter++;
        }
    }
}

#endif
