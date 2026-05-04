// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.pilha-desempilha-vetor

#include <stdlib.h>

typedef struct pilha {
  int *dados;
  int N, topo;
} pilha;

int desempilha (pilha *p, int *y){
    if(p==NULL)
        return 0;
    if(p->dados==NULL)
        return 0;
    if(p->topo==0)
        return 0;
    p->topo--;
    *y = p->dados[p->topo];
    return 1;
}