#include "sort.h"
#include "sort.cpp"
#include <array>
#include <algorithm>


#ifndef RADIXSORT_H
#define RADIXSORT_H


template <typename any>
class radixsort : public sort<any>
{
private:
    /* data */
public:
    radixsort(/* args */);
    ~radixsort();
    void sortVector(std::vector<any>& Arr)override;
};


#endif
