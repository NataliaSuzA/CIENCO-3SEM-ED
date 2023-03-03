/*
Construa um programa em C++ que calcule e apresente quanto deve ser
pago por um produto considerando a leitura do preço de etiqueta (PE) e o
código da condição de pagamento (CP). Utilize para os cálculos a tabela de
condições de pagamento a seguir:
1- á vista em dinheiro ou cheuqe, com 10% de desconto
2- á vista com cartão de credito, com 5% de desconto
3- em 2 vezes, preço normal da etiqueta sem juros
4- em 3 vezes, preço de etiqueta com acrescimo de 10%
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
       cout << "Pagamento á vista tem 10% de desconto: " << FP;
    }

     else if (FP == 2)
   {
       FP = etiqueta - etiqueta * 0.5;
       cout << "Pagamento á vista no credito 5% de desconto: " << FP;
    }

    else if (FP == 3)
   {
       FP = etiqueta;
       cout << "Pagamento em 2 vezes é o preço normal: " << FP << endl <<" sendo cada parcela de :" << FP /2;
    }

     else if (FP == 4)
   {
       FP = etiqueta + etiqueta * 0.10;
       cout << "Pagamento teve um acrescimo de 10% ficou: " << FP << endl <<" sendo cada parcela de :" << FP /3;
    }

    else
        {
            cout << "Essa opção não existe";
        }
}
