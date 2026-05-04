// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.pilha-empilha-vetor

#include <stdlib.h>

typedef struct pilha {
  int *dados;
  int N, topo;
} pilha;

int empilha (pilha *p, int x){
    if(p==NULL)
        return 0;
    if(p->topo == p->N){
        if(p->N>0)
            p->N*=2;
        else
            p->N=1;
        int* temp = realloc(p->dados, sizeof(int)*p->N);
        if(temp==NULL)
            return 0;
        p->dados=temp;
    }
    p->dados[p->topo]=x;
    p->topo++;
    return 1;
}