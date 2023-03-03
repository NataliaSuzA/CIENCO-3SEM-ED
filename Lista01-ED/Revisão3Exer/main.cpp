/*Faça um programa em C++ que receba o número de horas trabalhadas e o
valor do salário mínimo. Calcule e mostre o salário a receber seguindo as
regras abaixo:
a. A hora trabalhada vale a metade do salário mínimo;
b. O salário bruto equivale ao número de horas trabalhadas multiplicado
pelo valor da hora trabalhada
c. O imposto equivale a 3% do salário bruto;
d. O salário a receber equivale ao salário bruto menos o imposto.
*/

#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");

    //variaveis
    float numH, valorH, salMin, salBruto, imposto, salLiq;

    //entrada de dados
    cout << "Digite o valor do Salario minimo: ";
    cin >> salMin;
    cout << "Digite o numeero de Horas Trabalhadas: ";
    cin >> numH;

    //processamento
    valorH = salMin / 2;
    salBruto = numH * valorH;
    imposto = salBruto * 3/100;
    salLiq = salBruto - imposto;

    cout << "O salario a receber é de R$" << salLiq;


}
