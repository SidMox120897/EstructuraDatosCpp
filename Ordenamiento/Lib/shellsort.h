#include "sort.h"
#include "sort.cpp"

#ifndef BUBBLESORT_H
#define BUBBLESORT_H

template <typename any>
class shellsort : sort<any>
{
private:
    /* data */
public:
    shellsort(/* args */);
    ~shellsort();
    void sortVector(std::vector<any>& Arr)override;
};

#endif