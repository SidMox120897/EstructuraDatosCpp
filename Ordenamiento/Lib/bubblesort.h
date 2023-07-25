#include "sort.h"
#include "sort.cpp"


#ifndef BUBBLESORT_H
#define BUBBLESORT_H


template <typename any>
class bubblesort : public sort<any>
{
private:
    /* data */
public:
    bubblesort(/* args */);
    ~bubblesort();
    void sortVector(std::vector<any>& Arr)override;
};

#endif