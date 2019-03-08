#ifndef PILHAHEADER_H_INCLUDED
#define PILHAHEADER_H_INCLUDED
#include "trianguloHeader.h"

template <typename Tipo>

struct Pilha
{
    Tipo *v; //ponteiro para nosso vetor
    int topo;
    unsigned int tamanho;

    Pilha(int tam)
    {
        tamanho = tam;
        v = new Tipo[tamanho];
        topo = -1;
    }
    ~Pilha()
    {
        delete v;
    }
    void empilha(Tipo x)
    {
        v[++topo] = x;
        //topo++;
        //v[topo] = x;
    }
    Tipo desempilha()
    {
        //int temp = v[topo];
        Triangulo temp = v[topo];
        topo--;
        return temp;
    }
    Tipo elementoDoTopo()
    {
        return v[topo];
    }
    bool pilhaCheia()
    {
        return topo == tamanho - 1;
    }
    bool pilhaVazia()
    {
        return topo == -1;
    }
};

#endif // PILHAHEADER_H_INCLUDED
