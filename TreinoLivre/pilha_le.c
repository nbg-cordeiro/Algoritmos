// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.pilhas-listas

#include <stdlib.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void empilha (celula *p, int x){
    if(p==NULL)
        return;
    celula* nova = malloc(sizeof(celula));
    if(nova==NULL)
        return;
    nova->dado=x;
    nova->prox=p->prox;
    p->prox=nova;
}

int desempilha (celula *p, int *y){
    if(p==NULL || p->prox==NULL)
        return 0;
    celula* aux = p->prox->prox;
    *y = p->prox->dado;
    free(p->prox);
    p->prox=aux;
    return 1;
}