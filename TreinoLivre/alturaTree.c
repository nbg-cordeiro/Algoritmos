// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=monitores.abb-altura

#include <stdlib.h>

typedef struct no {
   int chave;
   struct no *esq, *dir;
} no;

int altura (no *r){
    if(r==NULL)
        return 0;
    int alturaEsq = altura(r->esq);
    int alturaDir = altura(r->dir);

    if(alturaEsq > alturaDir)
        return alturaEsq + 1;

    return alturaDir + 1;
}
