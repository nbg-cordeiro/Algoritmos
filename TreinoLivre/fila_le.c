// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.filas-listas

#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

void enfileira (celula **f, int x){
    if(f==NULL || (*f) == NULL)
        return;
    celula* raiz = (*f);
    celula* nova = malloc(sizeof(celula));
    nova->dado=x;
    nova->prox=raiz;

    f=&((*f)->prox);
    while((*f)!=raiz)
        f=&((*f)->prox);

    *f = nova;
}

int desenfileira (celula *f, int *y){
    if(f==NULL || f->prox==f)
        return 0;
    celula* aux = f->prox->prox;
    *y=f->prox->dado;
    free(f->prox);
    f->prox=aux;
    return 1;
}