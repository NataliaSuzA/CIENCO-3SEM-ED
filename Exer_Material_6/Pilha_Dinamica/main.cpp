#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <string> roupas;

    //empty retorna se pilha cheia ou vazia
    if(roupas.empty())
    {
        cout << "Pilha vazia." << endl;
    }

    roupas.push("Calca azul"); // push adiciona elementos na pilha
    roupas.push("calca preta");
    roupas.push("camiseta branca");
    roupas.push("camiseta amarela");
    roupas.push("calca branca");
    roupas.push("bermuda preta");

    //size motra o tamanho da pilha
    cout << "Tamanho da Pilha: " << roupas.size() << endl;

    while(!roupas.empty())
    {
        cout << "Peça de roupa no Topo: " << roupas.top() << endl;
        roupas.pop(); //retira elementos da pilha

        cout << endl;
        cout << "Tamanho da pilha: " << roupas.size() << endl;
        return 0;
    }
}
