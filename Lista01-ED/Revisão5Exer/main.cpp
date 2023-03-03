/*
Construa um programa em C++ que calcule e apresente quanto deve ser
pago por um produto considerando a leitura do pre�o de etiqueta (PE) e o
c�digo da condi��o de pagamento (CP). Utilize para os c�lculos a tabela de
condi��es de pagamento a seguir:
1- � vista em dinheiro ou cheuqe, com 10% de desconto
2- � vista com cart�o de credito, com 5% de desconto
3- em 2 vezes, pre�o normal da etiqueta sem juros
4- em 3 vezes, pre�o de etiqueta com acrescimo de 10%
*/

#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");

   float etiqueta, FP, teste;

   cout << "Qual o valor da etiqueta: ";
   cin >> etiqueta;

   cout << "Forma Pagamento: ";
   cin >> FP;

   if (FP == 1)
   {
       FP = etiqueta - etiqueta * 0.10;
       cout << "Pagamento � vista tem 10% de desconto: " << FP;
    }

     else if (FP == 2)
   {
       FP = etiqueta - etiqueta * 0.5;
       cout << "Pagamento � vista no credito 5% de desconto: " << FP;
    }

    else if (FP == 3)
   {
       FP = etiqueta;
       cout << "Pagamento em 2 vezes � o pre�o normal: " << FP << endl <<" sendo cada parcela de :" << FP /2;
    }

     else if (FP == 4)
   {
       FP = etiqueta + etiqueta * 0.10;
       cout << "Pagamento teve um acrescimo de 10% ficou: " << FP << endl <<" sendo cada parcela de :" << FP /3;
    }

    else
        {
            cout << "Essa op��o n�o existe";
        }
}
