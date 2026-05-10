// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=monitores.abb-remove

#include <stdlib.h>

typedef struct no {
   int chave;
   struct no *esq, *dir;
} no;

no *remover (no*r, int x){
    if(r==NULL)
        return NULL;
    if(x > r->chave)
        r->dir = remover(r->dir, x);
    else if(x < r->chave)
        r->esq = remover(r->esq, x);
    else{
        if(r->esq == NULL){
            no* aux = r->dir;
            free(r);
            return aux;
        }
        if(r->dir == NULL){
            no* aux = r->esq;
            free(r);
            return aux;
        }

        no* antecessor = r->esq;
        while(antecessor->dir != NULL)
            antecessor = antecessor->dir;
        r->chave = antecessor->chave;
        r->esq = remover(r->esq, antecessor->chave);
    }
    return r;
}