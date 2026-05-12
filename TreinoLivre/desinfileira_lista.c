// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.fila-desenfileira-lista

#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

int desenfileira (celula *f, int *y){
    if(f==NULL || f->prox == NULL)
        return 0;
    celula* aux = f->prox;
    f->prox=aux->prox;
    *y = aux->dado;
    free(aux);
    return 1;
}