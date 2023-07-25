#include "sort.h"
#include "sort.cpp"

#ifndef BIBUBBLESORT_H
#define BIBUBBLESORT_H

template <typename any>
class bibubblesort : public sort<any>
{
private:
    /* data */
public:
    bibubblesort(/* args */);
    ~bibubblesort();
    void sortVector(std::vector<any>& Arr)override;
};



#endif