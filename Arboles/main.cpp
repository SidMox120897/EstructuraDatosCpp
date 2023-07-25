#include <iostream>
//#include "Lib/"
#include "Lib/node.h"
#include "Lib/ArbolB.h"
#include "Lib/ArbolB.cpp"
#include "Lib/ArbolBMox.h"
#include "Lib/ArbolBMox.cpp"


int main(int argc, char const *argv[])
{
    /*Modo A*/
    nodeT<int>* root=new nodeT<int>(1);
    root->left = new nodeT<int>(2);
    root->right = new nodeT<int>(4);
    root->left->left = new nodeT<int>(3);


    std::cout<<"Raiz: "<<root->Info<<std::endl;
    std::cout<<"Hijo I: "<<root->left->Info<<std::endl;
    std::cout<<"Hijo D: "<<root->right->Info<<std::endl;


    /*Modo B*/
    nodeT<int>* root2=new nodeT<int>(1);
    nodeT<int>* nodoA=new nodeT<int>(2);
    nodeT<int>* nodoB=new nodeT<int>(3);
    nodeT<int>* nodoC=new nodeT<int>(4);
    nodeT<int>* nodoD=new nodeT<int>(5);

    root2->left = nodoA;
    root2->right = nodoB;
    nodoA->left = nodoC;
    nodoA->right = nodoD;

    std::cout<<"Raiz2: "<<root2->Info<<std::endl;
    std::cout<<"Raiz2 Hijo I: "<<root2->left->Info<<std::endl;
    std::cout<<"Raiz2 Hijo D: "<<root2->right->Info<<std::endl;
    std::cout<<"Raiz2 nieto I de hijo I: "<<root2->left->left->Info<<std::endl;
    std::cout<<"Raiz2 nieto D de hijo I: "<<root2->left->right->Info<<std::endl;


    ArbolB<int>* Arb=new ArbolB<int>();
    Arb->insertarABBO(-2);
    Arb->insertarABBO(-1);
    Arb->insertarABBO(3);
    Arb->insertarABBO(-4);
    Arb->insertarABBO(5);
    Arb->insertarABBO(-6);
    Arb->insertarABBO(1);



    Arb->inOrden();
    Arb->preOrden();
    Arb->postOrden();
    Arb->porNiveles();

    std::cout<<"Altura: "<<Arb->Altura()<<std::endl;
    std::cout<<"NroElementos: "<<Arb->nroHijos()<<std::endl;
    std::cout<<"NroHojas: "<<Arb->nroHojas()<<std::endl;
    std::cout<<"NroRamas: "<<Arb->nroRamas()<<std::endl;

    ArbolBMox<int>* ArbMox=new ArbolBMox<int>();

    return 0;
}
