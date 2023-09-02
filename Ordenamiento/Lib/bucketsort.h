#include "sort.h"
#include "sort.cpp"
#include <algorithm>

#ifndef BUCKETSORT_H
#define BUCKETSORT_H

template <typename any>
class bucketsort :public sort<any>
{
private:
    /* data */
public:
    bucketsort(/* args */);
    ~bucketsort();
    void sortVector(std::vector<any>& Arr)override;
};




#endif
