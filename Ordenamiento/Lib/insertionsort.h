#include "sort.h"
#include "sort.cpp"


#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H


template <typename any>
class insertionsort : sort<any>
{
private:
    /* data */
public:
    insertionsort(/* args */);
    ~insertionsort();
    void sortVector(std::vector<any>& Arr)override;
};


#endif