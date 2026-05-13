// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=monitores.abb-insere

#include <stdlib.h>

typedef struct no {
   int chave;
   struct no *esq, *dir;
} no;

no *inserir (no *r, int x){
    if(r == NULL){
        no* novo = malloc(sizeof(no));
        if(novo == NULL)
            return NULL;
        novo->chave = x;
        novo->dir = NULL;
        novo->esq = NULL;
        return novo;
    }
    if(r->chave > x)
        r->esq = inserir(r->esq, x);
    else if(r->chave < x)
        r->dir = inserir(r->dir, x);
    
    return r;
}