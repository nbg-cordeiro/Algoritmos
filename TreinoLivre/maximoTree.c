// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=monitores.abb-maximo

#include <stdlib.h>

typedef struct no {
   int chave;
   struct no *esq, *dir;
} no;

no *maximo (no *r){
    if(r==NULL)
        return NULL;
    while(r->dir!=NULL)
        r=r->dir;
    return r;
}