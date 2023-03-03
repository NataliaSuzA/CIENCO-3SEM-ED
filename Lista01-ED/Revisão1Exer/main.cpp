/*Elabore um programa em C++ que solicite o peso e a altura de uma
determinada pessoa. Após a digitação, exibir se esta pessoa está ou não com
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
       cout << "Está abaixo do peso. " ;
   }

    else if (IMC < 25)
    {
       cout << "Está no peso ideal. " ;
    }

    else
    {
        cout << "Está acima do peso. " ;
    }





}


