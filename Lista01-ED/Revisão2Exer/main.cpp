/*Elaborar um programa em C++ em que dada a idade de um nadador,
classifique-o em uma das seguintes categorias: infantil A (de 5 a 7 anos),
infantil B (de 8 a 10 anos), juvenil A (de 11 a 13 anos), juvenil B (14 a 17
anos) e senior (maior que 17 anos)
*/
#include <locale>
#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");
   int idade;

   cout << "Qual a idade do nadador: ";
   cin >> idade;

   if (idade < 5)
    {
     cout << "N�o tem classifica��o";
   }

   else if (idade >=5 && idade <= 7)
   {
       cout << "Classifica��o:Infantil A ";
   }

   else if (idade <= 10)
   {
       cout << "Classifica��o:Infantil B ";
   }

    else if  (idade <= 13)
   {
       cout << "Classifica��o:Juvenil A ";
   }

   else if  (idade <= 17)
   {
       cout << "Classifica��o:Juvenil B ";
   }

      else
    {
        cout << "Classifica��o: Senior ";
    }
}
