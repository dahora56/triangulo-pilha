/*
João Victor Oliveira da Hora
ADS Manhã - 3º Ciclo
FATEC Rubens Lara
08/03/2019
*/

#include <iostream>
#include "trianguloHeader.h"
#include "pilhaHeader.h"
#include <stack>

using namespace std;

int main()
{
    int opc;
    Triangulo valor;

    Pilha<Triangulo> p(10);

    do
    {
        cout<<"\nEscolha uma opcao:"<<endl;
        cout<<"1 - Empilha"<<endl;
        cout<<"2 - Desempilha"<<endl;
        cout<<"3 - Elemento do Topo"<<endl;
        cout<<"4 - Exibe a Pilha"<<endl;
        cout<<"Escolha: ";
        cin>>opc;

        switch(opc)
        {
        case 1:
            if(p.pilhaCheia())
                cout<<"\nPilha cheia..."<<endl;
            else
            {
                cout<<"Digite o valor de A: ";
                cin>>valor.a;
                cout<<"Digite o valor de B: ";
                cin>>valor.b;
                cout<<"Digite o valor de C: ";
                cin>>valor.c;

                if(valor.isTriangulo())
                {
                    p.empilha(valor);
                    cout<<"Empilhado com sucesso!"<<endl;
                }
                else
                    cout<<"Não é um triângulo. Tente novamente!"<<endl;
            }
            break;
        case 2:
            if(p.pilhaVazia())
                cout<<"\nPilha vazia..."<<endl;
            else
                //cout<<"\nDesempilhado: "<<p.desempilha()<<endl;
                p.desempilha();
            break;
        case 3:
            if(p.pilhaVazia())
                cout<<"\nPilha vazia..."<<endl;
            else
                cout<<"\nElemento do topo\n"<<"Area: "<<valor.area()<<endl<<"Perimetro: "<<valor.perimetro()<<endl<<"Classificacao: "<<valor.classificacao()<<endl;
            break;
        case 4:
            if(p.pilhaVazia())
                cout<<"\nPilha vazia..."<<endl;
            else
            {
                cout<<endl;
                for(int i = 0; i <= p.topo; i++)
                {
                    //cout<<i + 1<<": "<<p.v[i]<<endl;
                    cout<<"Area: "<<valor.area()<<endl;
                    cout<<"Perimetro: "<<valor.perimetro()<<endl;
                    cout<<"Classificacao: "<<valor.classificacao()<<endl;
                }
                cout<<endl;
            }
            break;
        case 9:
            cout<<"\nFim da aplicacao."<<endl;
            break;
        default:
            cout<<"\nOpcao invalida!"<<endl;
            break;
        }
    }while(opc != 9);

    return 0;
}
