/* Construa um programa em C++ que calcule o novo sal�rio de um funcion�rio.
Considere que o funcion�rio dever� receber um reajuste de 15% caso seu
sal�rio seja menor que 1000. Se o sal�rio for maior ou igual a 1000, mas
menor ou igual a 1500, o reajuste deve ser de 10%. Caso o sal�rio seja maior
que 1500, o reajuste deve ser de 5%.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");

   float salario, reajuste, novo;

   cout << "Digite o sal�rio : ";
   cin >> salario;

   if (salario < 1000)
   {
       reajuste = salario * 0.15;
       novo = reajuste + salario;
       cout << " O novo sal�rio ser� de :" << novo;
    }

    else if (salario <= 1500)
   {
       reajuste = salario * 0.10;
       novo = reajuste + salario;
       cout << " O novo sal�rio ser� de :" << novo;
   }
    else
   {
       reajuste = salario * 0.05;
       novo = reajuste + salario;
       cout << " O novo sal�rio ser� de :" << novo;

   }
}
