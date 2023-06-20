#include <iostream>

using namespace std;

int main()
{
   list<int> lista;
   lista.push_back(1); //[1]
   lista.push_back(5); //[1,5]
   lista.push_front(3); //[3,1,5]
   lista.push_front(2); //[2,1,5]
   ImprimirLista (lista);
   cout << "A lista tem " << lista.size() << "elementos" << endl << endl;
   lista.sort(); //ordena a lista
   ImprimirLista(lista); //[1,2,3,5]
   lista.remove(5); // remove todas as ocorrencias de 5 na lista

}
