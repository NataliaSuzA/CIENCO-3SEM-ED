#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char** argv)
{
    queue <string> cliente, aux;
    int opcao;
    string nome;

    do
    {
        cout << "ESCOLHA UMA DAS OPCOES: " << endl;
        cout << "01 - Inserir cliente." << endl;
        cout << "02 - Antender o proximo cliente." << endl;
        cout << "03 - Exibir fila de espera." << endl;
        cout << "04 - Encerrar o programa." << endl;
        cout << "Opcao desejada: ";
        cin >> opcao ;

        switch(opcao)
        {
            case 1:
                cout << "Nome do cliente: ";
                cin >> nome;
                cliente.push(nome);
                cout << "---> CLIENTE INSERIDO: " << nome << endl;
                cout << endl;
                break;

        case 2:
            cout << "--->  CLIENTE SENDO ATENDIDO:" << cliente.front() << endl;
            cliente.pop();
            cout << endl;
            break;

       case 3:
            if(!cliente.empty())
            {
                aux = cliente;
            }
            while(!aux.empty())
            {
                cout << aux.front();
                aux.pop();
            }

        case 4:
            cout << "--->   PROGRAMA ENCERRADO!";
            break;

        }
    }
     while( opcao != 4);


    return 0;


}
