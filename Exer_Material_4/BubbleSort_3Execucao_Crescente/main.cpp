// BUBBLE SORT 3 EXECUÇÃO (Ordem Crescente)

#include <iostream>

using namespace std;

void imprimeVetor(int x[])
{
    for(int i = 0; i <= 4; i++)
    {
        cout << i + 1 << " numero: " << x[i] << endl;
    }
}

void bubbleSort3(int x[])
{

   // ordenando de forma crescente
   // laço com a quantidade  de elementos do vetor
   // e enquanto houver troca
   int n = 1;
   int troca =1;
   int aux = 0;

   while (n <= 5 && troca ==1)
   {
       troca = 0;
       for(int i = 0; i <= 3; i ++)
       {
           if (x[i] > x[i + 1])
           {
               troca =1;
               aux = x[i];
               x[i] = x[i + 1];
               x[i + 1] = aux;
           }
       }
       n++;
   }
}

   int main (int argc, char** argv)
   {
       int x[5];

       // carregando os numeros no vetor
       for(int i = 0; i<= 4; i++)
       {
           cout << "Digite o numero " << endl;
           cin >> x[i];
       }
       bubbleSort3(x);
       imprimeVetor(x);

       return 0;
   }




