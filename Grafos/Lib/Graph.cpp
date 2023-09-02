#include "Graph.h"



#ifndef GRAPH_CPP
#define GRAPH_CPP

Graph::Graph(/* args */)
{
}

Graph::~Graph()
{
}


// void Graph::set_Nodos(std::vector<node*> Ns){
//     this->Nodos=Ns;
// }

std::vector<node*> Graph::get_Nodos(){
    return this->Nodos;
}
std::vector<edge*> Graph::get_Aristas(){
    return this->Aristas;
}

void Graph::AddNodo(node* N){
    this->Nodos.push_back(N);
}

void Graph::AddArista(edge* E){
    this->Aristas.push_back(E);
}
void Graph::ImprimirAristas(){
    int count=this->Aristas.size();
    for (int i = 0; i < count; i++)
    {
        this->Aristas[i]->Imprimir();
    }
    
}

void Graph::ImpimirNodos(){
    int count=this->Nodos.size();
    for (int i = 0; i < count; i++)
    {
        this->Nodos[i]->Imprimir();
    }
}


int Graph::BuscarNode(node* N){
    int count=this->Nodos.size();
    for (int i = 0; i < count; i++)
    {
        if(this->Nodos[i]==N){
            return i;
        }
    }
    return -1;
}

int Graph::BuscarArista(edge* E){
    int count=this->Aristas.size();
    for (int i = 0; i < count; i++)
    {
        if(this->Aristas[i]==E){
            return i;
        }
    }
    return -1;
}

std::vector<edge*> Graph::BuscarAristasInicio(node* node){
    int e=this->Aristas.size();
    std::vector<edge*> AristasNuevas;
    for (int i = 0; i < e; i++)
    {
        if(this->Aristas[i]->get_Inicial()==node){
            AristasNuevas.push_back(this->Aristas[i]);
        }
    }
    return AristasNuevas;
}



std::vector<std::vector<int>> Graph::MatrizDeAdya(){
    int n=this->Nodos.size();
    int e=this->Aristas.size();
    int i,f;
    std::vector<std::vector<int>> matriz(n, std::vector<int>(n, 0));
    for (int j = 0; j < e; j++)
    {
        i=BuscarNode(this->Aristas[j]->get_Inicial());
        f=BuscarNode(this->Aristas[j]->get_Final());
            matriz[i][f] = 1;
    }
    return matriz;
}

std::vector<std::vector<int>> Graph::MatrizDeInci(){
    int n=this->Nodos.size();
    int e=this->Aristas.size();
    int i,f;
    std::vector<std::vector<int>> matriz(n, std::vector<int>(e, 0));
    for (int j = 0; j < e; j++)
    {
        i=BuscarNode(this->Aristas[j]->get_Inicial());
        f=BuscarNode(this->Aristas[j]->get_Final());
        matriz[i][j] = 1;
        matriz[f][j] = 1;
    }
    return matriz;
}


std::vector<std::vector<int>> Graph::MatrizDeAdyaPeso(){
    int n=this->Nodos.size();
    int e=this->Aristas.size();
    int i,f;
    std::vector<std::vector<int>> matriz(n, std::vector<int>(n, 0));
    for (int j = 0; j < e; j++)
    {
        i=BuscarNode(this->Aristas[j]->get_Inicial());
        f=BuscarNode(this->Aristas[j]->get_Final());
            matriz[i][f] = this->Aristas[j]->get_peso();
    }
    return matriz;
}

std::vector<std::vector<int>> Graph::MatrizDeInciPeso(){
    int n=this->Nodos.size();
    int e=this->Aristas.size();
    int i,f;
    std::vector<std::vector<int>> matriz(n, std::vector<int>(e, 0));
    for (int j = 0; j < e; j++)
    {
        i=BuscarNode(this->Aristas[j]->get_Inicial());
        f=BuscarNode(this->Aristas[j]->get_Final());
        matriz[i][j] = this->Nodos[i]->get_peso();
        matriz[f][j] = this->Nodos[f]->get_peso();
    }
    return matriz;
}

void Graph::BFS(node* Ini){
    int n = this->Nodos.size();
    std::queue<node*> Cola;
    Cola.push(Ini);
    std::vector<bool> VBool(n, 0);     // Nodos Recorridos
    while (!Cola.empty())
    {
        int VBi= BuscarNode(Cola.front());
        if(!VBool[VBi]){
            VBool[VBi]=1;
            std::cout << Cola.front()->get_Nombre() << " ";
            std::vector<edge*> AristasVecinas = BuscarAristasInicio(Cola.front());
            for(int i=0; i< AristasVecinas.size();i++){
                Cola.push(AristasVecinas[i]->get_Final());
            }
        }
        Cola.pop();
    }
}

#endif