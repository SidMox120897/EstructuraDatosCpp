#include "sort.h"
#include "sort.cpp"

#ifndef MERGESORT_H
#define MERGESORT_H

template <typename any>
class mergesort : public sort<any>
{
private:
    /* data */
public:
    mergesort(/* args */);
    ~mergesort();
    void sortVector(std::vector<any>& Arr)override;
private:
    void merge(std::vector<any>& arr, int left, int mid, int right);
};


#endif
