/* Construa um programa em C++ que calcule o novo salário de um funcionário.
Considere que o funcionário deverá receber um reajuste de 15% caso seu
salário seja menor que 1000. Se o salário for maior ou igual a 1000, mas
menor ou igual a 1500, o reajuste deve ser de 10%. Caso o salário seja maior
que 1500, o reajuste deve ser de 5%.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");

   float salario, reajuste, novo;

   cout << "Digite o salário : ";
   cin >> salario;

   if (salario < 1000)
   {
       reajuste = salario * 0.15;
       novo = reajuste + salario;
       cout << " O novo salário será de :" << novo;
    }

    else if (salario <= 1500)
   {
       reajuste = salario * 0.10;
       novo = reajuste + salario;
       cout << " O novo salário será de :" << novo;
   }
    else
   {
       reajuste = salario * 0.05;
       novo = reajuste + salario;
       cout << " O novo salário será de :" << novo;

   }
}
