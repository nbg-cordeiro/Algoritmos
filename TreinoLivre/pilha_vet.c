// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.pilhas-vetores

#include <stdlib.h>

typedef struct {
   int *v;
   int N;
   int topo;
} pilha;

void empilha (pilha *p, int x){
    if(p==NULL)
        return;
    if(p->topo == p->N){
        if(p->N>0)
            p->N*=2;
        else
            p->N=1;
        int* temp = realloc(p->v, sizeof(int)*p->N);
        if(temp==NULL)
            return;
        p->v=temp;
    }
    p->v[p->topo]=x;
    p->topo++;
}

int desempilha (pilha *p, int *y){
    if(p==NULL)
        return 0;
    if(p->v==NULL)
        return 0;
    if(p->topo==0)
        return 0;
    p->topo--;
    *y = p->v[p->topo];
    return 1;
}