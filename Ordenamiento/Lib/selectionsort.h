#include "sort.h"

#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H


template <typename any>
class selectionsort : sort<any>
{
private:
    /* data */
public:
    selectionsort(/* args */);
    ~selectionsort();
    void sortVector(std::vector<any>& Arr)override;

};


#endif
