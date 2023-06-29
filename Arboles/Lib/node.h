#include <vector>

#ifndef NODET_H
#define NODET_H

template <typename any>
struct nodeT
{
    any Info;
    nodeT<any>* left;
    nodeT<any>* right;

    nodeT(any pInfo){
        Info = pInfo;
        left = nullptr;
        right = nullptr;
    }
};

#endif

#ifndef NODETS_H
#define NODETS_H
template <typename any>
struct nodeTs
{
    any Info;
    std::vector<nodeTs*> hijos;
    nodeTs(any pInfo){
        Info = pInfo;
    }
};

#endif