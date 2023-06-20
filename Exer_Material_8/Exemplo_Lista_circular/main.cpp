#include <iostream>

using namespace std;

//Defini��o da estrutura do n� da lista circular
struct Node
{
    int dado;       //Dado do n�
    Node* proximo;  //Ponteiro para o pr�ximo n�
};

//Fun��o para criar um novo n� com o dado fornecido
Node* criarNo(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->proximo = nullptr;
    return novoNo;
}

//Fun��o para inserir um novo n� no inicio da lista circular
void inserirNoInicio(Node** cabeca, int dado)
{
    //cria um novo n�
    Node* novoNo = criarNo(dado);

    if(*cabeca == nullptr)
    {
        //Se a lista estiver vazia, o novo n� ser� o inicio e o fim da lista
        *cabeca = novoNo;
        novoNo->proximo = novoNo;  //Aponta o proximo n� para ele mesmo
    }
    else
    {
        //Se a lista n�o estiver vazia, insere o novo n� no inicio e atualiza os ponteiros
        novoNo->proximo = *cabeca;
        Node* atual = *cabeca;
        while(atual->proximo != *cabeca)
        {
            atual = atual->proximo;
        }
        atual->proximo = novoNo;
        *cabeca = novoNo;
    }
}

//Fun��o para remover o n� do inicio da lista circular
void removeNoInicio(Node** cabeca)
{
    if(*cabeca == nullptr)
    {
        //verifica se a lista esta vazia
        cout << "Lista vazia. Nenhum no removido." << endl;
    }
    else if ((*cabeca)->proximo == *cabeca)
    {
        //Verifica se h� apenas um n� na lista
        delete *cabeca;
        *cabeca = nullptr;
        cout <<"No removido. Lista vazia." << endl;
    }
    else
    {
        //Remove o n� no inicio e atualiza os ponteiros
        Node* atual = *cabeca;
        while(atual->proximo != *cabeca)
        {
            atual = atual->proximo;
        }
        atual->proximo = (*cabeca)->proximo;
        Node* temp = *cabeca;
        *cabeca = (*cabeca)->proximo;
        delete temp;
        cout << "No removido." << endl;
    }
}

//Fun��o para imprimir os elementos da lista circular
void imprimirLista(Node* cabeca)
{
    if(cabeca == nullptr)
    {
        cout << "Lista vazia." << endl;
        return;
    }
    cout << "Elementos da lista: ";
    Node* atual = cabeca;
    do
    {
        cout << atual->dado << " " ;
        atual = atual->proximo;
    }
    while(atual != cabeca);
    cout << endl;
}

//Fun��o principal

int main()
{
    Node* cabeca = nullptr;  //Ponteiro para o inicio da lista circular

    //Inserindo alguns n�s no inicio da lista circular
    inserirNoInicio(&cabeca, 3);
    inserirNoInicio(&cabeca, 5);
    inserirNoInicio(&cabeca, 7);

    //Imprimindo os elementos da lista circular
    imprimirLista(cabeca);

    //Removendo um n� do inicio da lista circular
    removeNoInicio(&cabeca);

    //Imprimindo os elementos da lista circular ap�s a remo��o
    imprimirLista(cabeca);

    return 0;inserirNoInicio(&cabeca, 3);
}

