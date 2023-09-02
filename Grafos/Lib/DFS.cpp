#include "DFS.h"

#ifndef DFS_CPP
#define DFS_CPP


DFS::DFS(/* args */)
{
}

DFS::~DFS()
{
}

void DFS::DFSImprimir(Graph G, node* Ni){
    int n = G.get_Nodos().size();
    for (int i = 0; i < n; i++)
    {
        this->Vbool.push_back(0);
    }
    DFSRecord(G,Ni);
}

void DFS::DFSRecord(Graph G, node* Ni){
    int VBi = G.BuscarNode(Ni);
    if(!Vbool[VBi]){
        Vbool[VBi]=1;
        std::cout << Ni->get_Nombre() << " "; //Imprimir
        std::vector<edge*> AristasVecinas = G.BuscarAristasInicio(Ni);
            for(int i=0; i< AristasVecinas.size(); i++){
                DFSRecord(G,AristasVecinas[i]->get_Final());
            }
    }    
}

// void Graph::DFS(node* Ini){
//     int n=this->Nodos.size();
//     for (int i = 0; i < n; i++)
//     {
//         this->VBool.push_back(0);
//     }
//     DFSRecord(Ini);
// }

// void Graph::DFSRecord(node* Ini){
//     int VBi=BuscarNode(Ini);
//     if(!VBool[VBi]){
//         VBool[VBi]=1;
//         std::cout << Ini->get_Nombre() << " "; //Imprimir
//         std::vector<edge*> AristasVecinas = BuscarAristasInicio(Ini);
//             for(int i=0; i< AristasVecinas.size(); i++){
//                 DFSRecord(AristasVecinas[i]->get_Final());
//             }
//     }
// }





void BuscarElemento(Graph G, node Ni, int X){

}

#endif