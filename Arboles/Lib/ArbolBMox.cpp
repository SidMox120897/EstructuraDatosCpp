#include "ArbolBMox.h"

template <typename any>
ArbolBMox<any>::ArbolBMox(/* args */)
{
    std::cout<<"XD"<<std::endl;
}

template <typename any>
ArbolBMox<any>::ArbolBMox(any info)
{
    std::cout<<"XD"<<std::endl;
}

template <typename any>
ArbolBMox<any>::~ArbolBMox()
{
}

template <typename any>
bool ArbolBMox<any>::tieneUnHijo()
{
    return this->Der!=nullptr || this->Izq!=nullptr;
}

template <typename any>
bool ArbolBMox<any>::tieneDosHijos()
{
    return this->Der!=nullptr && this->Izq!=nullptr;
}

template <typename any>
bool ArbolBMox<any>::siositieneUnHijo()
{
    return this->tieneUnHijo() && !this->tieneDosHijos();
}

template <typename any>
bool ArbolBMox<any>::noTieneHijos()
{
    return !this->tieneDosHijos();
}

template <typename any>
bool ArbolBMox<any>::esVacio()
{
    return this==nullptr;
}

template <typename any>
void ArbolBMox<any>::insertar(any info)
{
    if(this->esVacio()){
        this->Info=info;
    }else if(this->Izq==nullptr){
        this->Izq->insertar(info);
    }else if(this->Der==nullptr){
        this->Der->insertar(info);
    }else{
        if(this->Izq->Der==nullptr){
            this->Izq->insertar(info);
        }else{
            this->Der->insertar(info);
        }
    }
}

template <typename any>
void ArbolBMox<any>::inOrden()
{
    if(this->esVacio()){
        std::cout<<" ";
    }else{
        this->Izq()->inOrden();
        std::cout<<this->Info<<" ";
        this->Der()->inOrden();
    }
}

template <typename any>
void ArbolBMox<any>::postOrden()
{
    if(this->esVacio()){
        std::cout<<" ";
    }else{
        this->Izq()->inOrden();
        this->Der()->inOrden();
        std::cout<<this->Info<<" ";
    }
}

template <typename any>
void ArbolBMox<any>::preOrden()
{
    if(this->esVacio()){
        std::cout<<" ";
    }else{
        std::cout<<this->Info<<" ";
        this->Izq()->preOrden();
        this->Der()->preOrden();
    }
}

template <typename any>
void ArbolBMox<any>::porNiveles()
{
    if(this->esVacio()){
        std::cout<<" ";
    }else{
        std::queue<ArbolBMox<any>*> Cola;
        Cola.push(this);

        while (!Cola.empty())
        {
            ArbolBMox<any>* nodeAux = Cola.front();
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
}

template <typename any>
void ArbolBMox<any>::ImprimirRaiz(){
    std::cout<<this->Info<<std::endl;
}
