/* 2. Crie uma estrutura chamada animal que deve armazenar as seguintes informaçoes sobre cada animal:
nome do animal string
especie do animal string
idade do animal int
peso do animal em kg int
criar typedef listaAnimais que deve ser um vetor de 10 elementos do tippo animal
criar  programa que solicita os dados de 10 animais e armazena esse dados em uma variavel listaAnimais
exibir os dados dos 10 animais.*/

#include <iostream>
#include <cstdlib>
#define n 10

using namespace std;

typedef struct{
    string nome;
    string especie;
    int idade;
    int peso;
} Animal;



int main(void)
{
    Animal ListaAnimais[n];

    for(int i = 0; i < n; i++)
    {
      cout << "Entre com o nome do animal: ";
      getline(cin, ListaAnimais[i].nome);
      cout << "Especie: ";
      getline(cin, ListaAnimais[i].especie);
      cout << "Idade: ";
      cin >> ListaAnimais[i].idade;
      cout << "Peso: ";
      cin >> ListaAnimais[i].peso;
      system ("cls");

      cin.ignore();

    }
    for(int i = 0; i < n; i++)
    {
    cout << "Nome do animal: " << ListaAnimais[i].nome << endl;
    cout << "Espécie: " << ListaAnimais[i].especie << endl;
    cout << "Idade: " << ListaAnimais[i].idade << endl;
    cout << "Peso: " << ListaAnimais[i].peso << endl;

    cout << endl;
    }


    return 0;

}
