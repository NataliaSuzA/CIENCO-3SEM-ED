/*1. Crie uma estrutura chamada pessoa que seja capaz de armazenar o nome, o endereço, o CPF e a idade de 5 pessoas*/

#include <iostream>
#include <cstdlib>
#define n 5

using namespace std;

struct Pessoa{;
    string nome;
    string endereco;
    char cpf[11];
    int idade;
};

int main(void)
{
    Pessoa p[n];

    for(int i = 0; i < n; i++)
    {
      cout << "Entre com o nome: ";
      getline(cin, p[i].nome);
      cout << "Endereco: ";
      getline(cin, p[i].endereco);
      cout << "Idade: ";
      cin >> p[i].idade;
    cin.ignore();
      cout << "CPF: ";
      cin >> p[i].cpf;

      system ("cls");

    cin.ignore();
        }
    for(int i = 0; i < n; i++)
    {
    cout << "Nome: " << p[i].nome << endl;
    cout << "Endereço: " << p[i].endereco << endl;
    cout << "Idade: " << p[i].idade << endl;
    cout << "CPF: " << p[i].cpf << endl;

    cout << endl;
    }
   return 0;

}
