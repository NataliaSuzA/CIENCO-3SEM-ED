/*
Em uma elei��o presidencial existem dois candidatos. Os votos s�o
informados atrav�s de c�digos. Os dados utilizados para a contagem dos
votos t�m-se a seguinte codifica��o: 1,2= voto para os respectivos
candidatos; 3= voto nulo; 4= voto em branco; Elabore um programa em C++
que leia o c�digo do candidato em um voto. Como finalizador do conjunto
de votos, tem-se o valor 0. Calcule e escreva: (1) percentual de votos para
cada candidato; (2) percentual de votos nulos; (3) percentual de votos em
branco;
*/

#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");

    int voto, j=0, c=0, b=0, n=0;

   cout << "ELEI��O PRESIDENCIAL";

    while (voto != 0)
    {
        cout << endl;
        cout << "--------------------" <<endl;
        cout << "Candidatos � seguir:\n 1- Jo�o\n 2- Cleber\n 3- Voto Nulo\n 4- Em Branco\n" <<endl;
        cout << "Digite o numero correspondente ao seu voto: " ;
        cin >> voto;


        switch (voto)
        {
             case 0:
            {
                cout << "VOTA��O ENCCERRADA!"<<endl;
                break;
            }
            case 1:
            {
                cout << "Jo�o - VOTO REGISRAO!" <<endl ;
                j = j+1;
                break;
            }

            case 2:
            {

                cout << "Cleber - VOTO REGISRAO!" <<endl ;
                c = c+1;
                break;
            }

            case 3:
            {
                cout << " Voto  Nulo - VOTO REGISRAO!" <<endl ;
                n = n+1;;
                break;
            }

            case 4:
            {
                cout << "Voto Branco - VOTO REGISRAO!" <<endl ;
                b = b+1;
                break;
            }

            default:
            {
                cout << "OP��O INV�LIDA!";
            }
        }
    }
    cout << "Jo�o: " << j <<endl;
    cout << "Cleber: " << c <<endl;
    cout << "Voto Nulo: " << n <<endl;
    cout << "Voto em Branco: " << b << endl;
}
