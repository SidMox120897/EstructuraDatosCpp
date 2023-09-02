#include "sort.h"
#include "sort.cpp"

#ifndef QUICKSORT_H
#define QUICKSORT_H

template <typename any>
class quicksort : public sort<any>
{
private:
    /* data */
public:
    quicksort(/* args */);
    ~quicksort();
private:
    void quickSort(std::vector<any>& arr, int low, int high);
    int partition(std::vector<any>& arr, int low, int high);
};

#endif
