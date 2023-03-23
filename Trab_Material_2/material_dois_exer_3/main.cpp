/*3-Ler um vetor A de 10 números. Após, ler mais um número e guardar em
uma variável X. Armazenar em um vetor M o resultado de cada
elemento de A multiplicado pelo valor X. Logo após, imprimir o vetor M.
*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
setlocale(LC_ALL,"Portuguese");

   int vetorA[10];
   int X = 5;
   int vetorM[10];

   srand(time(NULL));

   cout << " Vetor A: ";
   for (int i = 0; i < 10; i++)
   {
       vetorA[i] = (rand() % 10);
       cout << " " << vetorA[i];
   }

   cout << endl;
   cout << "\n --->  X = 5";
   for (int i = 0; i < 10; i++)
   {
        vetorM[i] = vetorA[i] * 5;
   }

   cout << endl;
   cout << "\n Vetor M: ";

    for (int i = 0; i < 10; i++)
    {
        cout << " " << vetorM[i];
    }
    cout << endl;
}
