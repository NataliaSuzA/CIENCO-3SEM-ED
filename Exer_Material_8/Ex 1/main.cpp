#include <iostream>
#include <list>
#include <iterator>
#include <string>

using namespace std;

int main()
{

    list<string>listafuncionarios;
    list<string>listafuncionarios2;

    string nomes;
    int funcionarios;

    cout << "Quantos funcionarios serao cadastrados: ";
    cin >> funcionarios;

    for(int i = 0; i < funcionarios; i++)
    {
        cout << "Qual o nome para cadastro?: " << endl;
        cin >> nomes;

        listafuncionarios.push_back(nomes);
    }

    cout << endl;

    cout << "Lista vazia? " << (listafuncionarios.empty() ? "Sim" : "Nao") << endl;


    for(list<string>::iterator it = listafuncionarios.begin(); it != listafuncionarios.end(); ++it)
    {
        cout << *it << endl;
    }
    cout << endl;

    listafuncionarios2 = listafuncionarios;

    listafuncionarios.sort();

     for(list<string>::iterator it = listafuncionarios.begin(); it != listafuncionarios.end(); ++it)
    {
        cout << *it << endl;
    }

    cout << endl;

    listafuncionarios2.reverse();

    for(list<string>::iterator it = listafuncionarios2.begin(); it != listafuncionarios2.end(); ++it)
    {
        cout << *it << endl;
    }
    cout << endl;

    cout << "O tamanho da lista de funcionarios e: " << listafuncionarios2.size() << endl;

}
