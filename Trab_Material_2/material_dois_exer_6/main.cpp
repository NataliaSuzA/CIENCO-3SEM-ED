/*6-Fa�a um programa em C++ para ler e armazenar em um vetor a temperatura
m�dia de todos os dias do ano. Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura m�dia anual
d) O n�mero de dias no ano em que a temperatura foi inferior a m�dia anual */

#include <iostream>
#include <cstdlib>
#include <time.h>
#define TAM 4
using namespace std;

int main()
{
setlocale(LC_ALL,"Portuguese");

    int dia[TAM],abaixo[TAM],maior, posMaior, menor, posMenor, contaBaixo = 0;
    float media, soma=0;
    srand(time(NULL));

    for (int i = 0; i < TAM; i++)
   {
       dia[i] = (rand() % 10);
       cout << "Dia" << i << " --> " << dia[i] << "�; " << endl;
   }

cout << endl;
    cout << "\nPosi��o e maior temperatura: " ;
    maior = dia[0];
    posMaior = 0;
    for (int i = 0; i < TAM; i++)
    {
        if(dia[i] > maior)
        {
            maior = dia[i];
            posMaior = i;
        }
    }
     cout << posMaior << " --> " << maior;


cout << endl;
     cout << "\nPosi��o e menor temperatura: ";
   menor = dia[0];
   posMenor = 0;
    for (int i = 0; i < TAM; i++)
    {
        if(dia[i] < menor)
        {
            menor = dia[i];
            posMenor = i;
        }
    }
     cout << posMenor << " --> " << menor;

cout << endl;



    for (int i = 0; i < TAM; i++)
    {
            soma = soma + dia[i];
    }

    media = soma / TAM;

     cout << "\nTemperatura Media: " << media << endl;


     for (int i = 0; i < TAM; i++)
     {
         if (dia[i] < media)
         {
             abaixo[contaBaixo] = i;
             contaBaixo++;
         }
     }
     cout << "\nForam encontrados " << contaBaixo << " dias abaixo da m�dia. Foram eles os dias: ";


     for (int i = 0; i < contaBaixo; i++)
     {
         cout << abaixo[i] << " ";
     }

     cout << endl;
}




