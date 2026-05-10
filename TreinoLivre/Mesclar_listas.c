// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.le-junta

#include <stdlib.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;


void mescla_listas (celula *l1, celula *l2, celula *l3){
    if(l1!=NULL)
        l1=l1->prox;
    if(l2!=NULL)
        l2=l2->prox;
    celula* atual = l3;
    while(l1!=NULL && l2!=NULL){
        if(l1->dado<l2->dado){
            atual->prox=l1;
            l1=l1->prox;
        }
        else{
            atual->prox=l2;
            l2=l2->prox;
        }
        atual=atual->prox;
    }
    if(l1!=NULL)
        atual->prox=l1;
    else if(l2!=NULL)
        atual->prox=l2;
}