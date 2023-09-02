#include "Lib/node.h"
#include "Lib/node.cpp"

#include "Lib/edge.h"
#include "Lib/edge.cpp"

#include "Lib/Graph.h"
#include "Lib/Graph.cpp"



#include "Lib/DFS.h"
#include "Lib/DFS.cpp"


int main(int argc, char const *argv[])
{
    node* N1 =new node("N1",5);
    node* N2 =new node("N2",15);
    node* N3 =new node("N3",25);
    node* N4 =new node("N4",35);

    edge* E1=new edge("E1",3,N1,N2);
    edge* E2=new edge("E2",33,N1,N3);
    edge* E3=new edge("E3",73,N2,N3);
    edge* E4=new edge("E4",93,N3,N4);
    edge* E5=new edge("E5",43,N4,N4);


    Graph G1 = Graph();

    G1.AddNodo(N1);
    G1.AddNodo(N2);
    G1.AddNodo(N3);
    G1.AddNodo(N4);
    G1.AddNodo(new node("N5",45));

    G1.AddArista(E1);
    G1.AddArista(E2);
    G1.AddArista(E3);
    G1.AddArista(E4);
    G1.AddArista(E5);
    G1.AddArista(new edge("E6",63,N1,N2));

    G1.ImpimirNodos();
    G1.ImprimirAristas();
    
    std::vector<std::vector<int>> matriz=G1.MatrizDeAdya();

    for (int i = 0; i < matriz.size(); ++i) {
        for (int j = 0; j < matriz[0].size(); ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::vector<std::vector<int>> matriz2=G1.MatrizDeInci();

    for (int i = 0; i < matriz2.size(); ++i) {
        for (int j = 0; j < matriz2[0].size(); ++j) {
            std::cout << matriz2[i][j] << " ";
        }
        std::cout << std::endl;
    }


    matriz=G1.MatrizDeAdyaPeso();

    for (int i = 0; i < matriz.size(); ++i) {
        for (int j = 0; j < matriz[0].size(); ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    matriz2=G1.MatrizDeInciPeso();

    for (int i = 0; i < matriz2.size(); ++i) {
        for (int j = 0; j < matriz2[0].size(); ++j) {
            std::cout << matriz2[i][j] << " ";
        }
        std::cout << std::endl;
    }


    G1.BFS(N1);
    std::cout<<std::endl;
    // G1.DFS(N1);
    // std::cout<<std::endl;

    DFS Operador;

    Operador.DFSImprimir(G1,N1);
    std::cout<<std::endl;

    return 0;
}
