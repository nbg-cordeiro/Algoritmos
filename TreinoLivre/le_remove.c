// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.le-remocao

#include <stdlib.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void remove_depois (celula *p){
    if(p==NULL || p->prox==NULL)
        return;
    celula* temp = p->prox->prox;
    free(p->prox);
    p->prox=temp;
}

void remove_elemento (celula *le, int x){
    while(le!=NULL && le->prox != NULL){
        if(le->prox->dado == x){
            remove_depois(le);
            return;
        }
        le=le->prox;
    }
}

void remove_todos_elementos (celula *le, int x){
    while(le!=NULL && le->prox != NULL){
        if(le->prox->dado == x)
            remove_depois(le);
        else
            le=le->prox;
    }
}