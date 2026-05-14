// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.fila-enfileira-lista

#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

celula *enfileira (celula *f, int x){
    if(f==NULL)
        return NULL;

    celula* aux = f;
    while(aux->prox!=NULL && aux->prox!=f)
        aux=aux->prox;

    celula* nova = malloc(sizeof(celula));
    if(nova==NULL)
        return NULL;

    nova->dado=x;
    nova->prox=aux->prox;
    aux->prox=nova;
    return f;
}