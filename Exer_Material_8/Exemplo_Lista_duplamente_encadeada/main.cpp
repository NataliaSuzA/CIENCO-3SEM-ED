#include <iostream>

using namespace std;

//Defini��o da estrutura do n� da lista duplamente encadeada
struct Node
{
    int dado;       //Dado do n�
    Node* anterior; //Ponteiro para o n� anterior
    Node* proximo;  //Ponteiro para o pr�ximo n�
};

//Fun��o para criar um novo n� com o dado fornecico
Node* criarNo(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->anterior = nullptr;
    novoNo->proximo = nullptr;
    return novoNo;
}

//Fun��o para inserir um novo n� no inicio da lista
void inserirNoInicio(Node** cabeca, int dado)
{
    //Cria um novo n�
    Node* novoNo = criarNo(dado);

    //Atualiza os ponteiros do noco n� e do n� atual no inicio da lista
    novoNo->proximo = *cabeca;
    if(*cabeca != nullptr)
    {
        (*cabeca)->anterior = novoNo;

    }

    //Atualiza o ponteiro para o novo n� como n� no inicio da lista
    *cabeca = novoNo;
    }

    //Fun��o para remover um n� com o dado fornecido da lista
    void removerNo(Node** cabeca, int dado)
    {
        //Verifica se a lista esta vazia
        if(*cabeca == nullptr)
        {
            cout << "Lista vazia. Nenhum no removido." << endl;
            return;
        }

        //Verifica se o primeiro n� contem o dado a ser removido
        if((*cabeca)->dado = dado)
        {
            Node* temp = *cabeca;
            *cabeca = (*cabeca)->proximo;
            if(*cabeca != nullptr)
            {
                (*cabeca)->anterior = nullptr;
            }
            delete temp;
            cout << "No removido." << endl;
            return;
        }

        //Procura o n� a ser removido na lista
        Node* atual = *cabeca;
        while (atual != nullptr && atual->dado != dado)
        {
            atual = atual->proximo;
        }

        //Se o n� foi encontrado, remove-se da lista
        if(atual != nullptr)
        {
            if(atual->anterior != nullptr)
            {
                atual->anterior = atual->proximo;
            }
            if(atual->proximo != nullptr)
            {
                atual->proximo->anterior = atual->anterior;
            }
            delete atual;
            cout << "No removido." << endl;
        }
        else
        {
            cout <<"No nao encontrado na lista." << endl;
        }
    }

    //Fun��o para imprimir os elementos da lista
    void imprimirLista(Node* cabeca)
    {
        cout << "Elementos da lista: ";
        while(cabeca != nullptr)
        {
            cout << cabeca->dado << " ";
            cabeca = cabeca->proximo;
        }
        cout << endl;
    }

    //Fun��o principal

int main()
{
    Node* cabeca = nullptr;   //ponteiro para inicio da lista

    //Inserindo alguns n�s no inicio da lista
    inserirNoInicio(&cabeca, 3);
    inserirNoInicio(&cabeca, 5);
    inserirNoInicio(&cabeca, 7);

    //Imprimindo os elementos da lista
    imprimirLista(cabeca);

    //Removendo um n� da lista
    removerNo(&cabeca, 5);

    //Imprimindo os elementos da lista ap�s a remo��o
    imprimirLista(cabeca);

    return 0;
}
