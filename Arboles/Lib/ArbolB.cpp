#include "ArbolB.h"


// template <typename any>
// Nombre_de_Clase<any>::CualquierFuncion(){
//
// }


template <typename any>
ArbolB<any>::ArbolB(){
    this->root=nullptr;
}

template <typename any>
ArbolB<any>::ArbolB(any info){
    this->root=new nodeT<any>(info);
}

template <typename any>
ArbolB<any>::~ArbolB(){
}

template <typename any>
int ArbolB<any>::Max(int A, int B){
    return A > B ? A : B;
}


template <typename any>
void ArbolB<any>::insertarABBO(any info){
    insertarABBO(this->root,info);
}


template <typename any>
void ArbolB<any>::insertarABBO(nodeT<any>*& R,any info){
    //Root igual al vacio
    if(R==nullptr){
        R = new nodeT<any>(info);
    }else{
        if(info<R->Info){
            if(R->left==nullptr){
                R->left = new nodeT<any>(info);
            }else{
                insertarABBO(R->left,info);
            }
        }else if(info>R->Info){
            if(R->right==nullptr){
                R->right = new nodeT<any>(info);
            }else{
                insertarABBO(R->right,info);
            }
        }else{
            std::cout<<"El nodo: "<<R->Info<<"Ya existe"<<std::endl;
        }
    }
}

template <typename any>
void ArbolB<any>::insertarABB(any info){
    insertarABB(this->root,info);
}


template <typename any>
void ArbolB<any>::insertarABB(nodeT<any>*& R,any info){
    if(R==nullptr){
        R = new nodeT<any>(info);
    }else if(R->left==nullptr){
        insertarABB(R->left,info);
    }else if(R->right==nullptr){
        insertarABB(R->right,info);
    }else{
        insertarABB(R->left->right==nullptr?R->left:R->right,info);
    }
}

template <typename any>
void ArbolB<any>::ImprimirRaiz(){
    std::cout<<"Raiz: "<<this->root->Info<<std::endl;
}

template <typename any>
void ArbolB<any>::inOrden()
{
    if(this->root==nullptr){
        std::cout<<"Este Arbol esta vacio"<<std::endl;
    }else{
        this->inOrden(this->root);
        std::cout << "\n";
    }
}

template <typename any>
void ArbolB<any>::inOrden(nodeT<any>* node)
{
    if(node!=nullptr){
        this->inOrden(node->left);
        std::cout<<node->Info<<" ";
        this->inOrden(node->right);
    }
}

template <typename any>
void ArbolB<any>::preOrden()
{
    if(this->root==nullptr){
        std::cout<<"Este Arbol esta vacio"<<std::endl;
    }else{
        this->inOrden(this->root);
        std::cout << "\n";
    }
}

template <typename any>
void ArbolB<any>::preOrden(nodeT<any>* node)
{
    if(node!=nullptr){
        std::cout<<node->Info<<" ";
        this->preOrden(node->left);
        this->preOrden(node->right);
    }
}

template <typename any>
void ArbolB<any>::postOrden()
{
    if(this->root==nullptr){
        std::cout<<"Este Arbol esta vacio"<<std::endl;
    }else{
        this->postOrden(this->root);
        std::cout << "\n";
    }
}

template <typename any>
void ArbolB<any>::postOrden(nodeT<any>* node)
{
    if(node!=nullptr){
        this->preOrden(node->left);
        this->preOrden(node->right);
        std::cout<<node->Info<<" ";
    }
}

template <typename any>
void ArbolB<any>::porNiveles()
{
    if(this->root==nullptr){
        std::cout<<"Este Arbol esta vacio"<<std::endl;
    }else{
        this->porNiveles(this->root);
        std::cout << "\n";
    }
}

template <typename any>
void ArbolB<any>::porNiveles(nodeT<any>* node)
{
    std::queue<nodeT<any>*> Cola;
    Cola.push(node);

    while (!Cola.empty())
    {
        nodeT<any>* nodeAux = Cola.front();
        std::cout << nodeAux->Info << " ";
        Cola.pop();

        if (nodeAux->left != nullptr) {
            Cola.push(nodeAux->left);
        }
        if (nodeAux->right != nullptr) {
            Cola.push(nodeAux->right);
        }
    }
}

template <typename any>
int ArbolB<any>::Altura(){
    if(this->root==nullptr){
        return 0;
    }else{
        return this->Altura(this->root);
    }
}

template <typename any>
int ArbolB<any>::Altura(nodeT<any>* node){
    if(node!=nullptr){
        return 1 + this->Max(this->Altura(node->left),this->Altura(node->right));
    }else{
        return 0;
    }
}

template <typename any>
int ArbolB<any>::nroHijos(){
    if(this->root==nullptr){
        return 0;
    }else{
        return this->nroHijos(this->root);
    }
}

template <typename any>
int ArbolB<any>::nroHijos(nodeT<any>* node){
    if(node==nullptr){
        return 0;
    }else if(node->left==nullptr && node->right==nullptr){
        return 1;
    }else{
        return this->nroHijos(node->left) + this->nroHijos(node->right)+1;
    }
}

template <typename any>
int ArbolB<any>::nroHojas(){
    if(this->root==nullptr){
        return 0;
    }else{
        return this->nroHojas(this->root);
    }
}

template <typename any>
int ArbolB<any>::nroHojas(nodeT<any>* node){
    if(node==nullptr){
        return 0;
    }else if(node->left!=nullptr && node->right!=nullptr){
        return this->nroHojas(node->left) + this->nroHojas(node->right);
    }else{
        return 1;
    }
}

template <typename any>
int ArbolB<any>::nroRamas(){
    if(this->root==nullptr){
        return 0;
    }else{
        return this->nroRamas(this->root);
    }
}

template <typename any>
int ArbolB<any>::nroRamas(nodeT<any>* node){
    if(node==nullptr){
        return 0;
    }else if(node->left==nullptr && node->right==nullptr){
        return 0;
    }else{
        return this->nroRamas(node->left) + this->nroRamas(node->right)+1;
    }
}