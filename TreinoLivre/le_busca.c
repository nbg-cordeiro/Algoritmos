// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.le-busca

#include <stdlib.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

celula *busca (celula *le, int x){
    if(le==NULL || le->prox==NULL)
        return NULL;
    le=le->prox;
    while(le!=NULL){
        if(le->dado==x)
            return le;
        le=le->prox;
    }
    return NULL;
}

celula *busca_rec (celula *le, int x){
    if(le==NULL || le->prox==NULL)
        return NULL;
    if(le->prox->dado==x)
        return le->prox;
    else
        return busca_rec(le->prox,x);
}