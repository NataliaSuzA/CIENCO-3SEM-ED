/*Elabore um programa em C++ que solicite o peso e a altura de uma
determinada pessoa. Ap�s a digita��o, exibir se esta pessoa est� ou n�o com
seu peso ideal, conforme tabela abaixo:
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");

    float peso, altura, IMC;


   cout << "Digite seu peso: ";
   cin >> peso;

   cout << "Digite sua altura: ";
   cin >> altura;

   IMC = peso / (altura*altura);

   if (IMC < 20)
   {
       cout << "Est� abaixo do peso. " ;
   }

    else if (IMC < 25)
    {
       cout << "Est� no peso ideal. " ;
    }

    else
    {
        cout << "Est� acima do peso. " ;
    }





}


