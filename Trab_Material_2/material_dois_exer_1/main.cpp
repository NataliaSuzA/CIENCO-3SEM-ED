/*1-Escreva um programa em C++ que permita a leitura dos nomes de 10
pessoas e armaze os nomes lidos em um vetor. Ap�s isto, o algoritmo
deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
anteriormente (guardados no vetor), ou N�O ACHEI caso contr�rio.*/

#include <iostream>
#include <string>
#define NOME 10
using namespace std;

int main()
{
setlocale(LC_ALL,"Portuguese");

    int indice;
    int total;
    bool achei = false;
    string palpite;
    string nota[NOME];
    indice = 0;

    while (indice < NOME)
    {
        cout << "Entre com um nome " << indice + 1 << ": " << endl;
        cin >> nota[indice];
        indice = indice + 1;
    }

    cout << "Descubra o nome: ";
    cin >> palpite;

    for (int i = 0; i < 10; i++)
    {
        if (nota[i] == palpite)
        {
            achei = true;
        }
    }

    if  (achei == true)
    {
        cout << "Achei!!";
    }
    else
    {
        cout << " N�o achei.";
    }
}
