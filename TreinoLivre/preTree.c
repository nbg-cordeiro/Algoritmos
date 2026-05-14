// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.arvore-binaria-pre

#include <stdlib.h>
#include <stdio.h>

typedef struct no {
   int dado;
   struct no *esq, *dir;
} no;

typedef struct Pilha{
    no* dado;
    struct Pilha* prox;
} Pilha;

Pilha* criarPilha(no* dado){
    Pilha* novaPilha = malloc(sizeof(Pilha));
    if(novaPilha==NULL)
        return NULL;
    novaPilha->dado = dado;
    novaPilha->prox = NULL;
    return novaPilha;
}

void push(Pilha** pilha, no* dado){
    if(dado==NULL)return;

    Pilha* novaPilha = criarPilha(dado);
    if(novaPilha==NULL)return;
        
    novaPilha->prox = *pilha;
    *pilha = novaPilha;
}

no* pop(Pilha** pilha){
    if(*pilha == NULL)
        return NULL;
    no* returnNode = (*pilha)->dado;
    Pilha* aux = (*pilha)->prox;
    free((*pilha));
    *pilha = aux;
    return returnNode;
}

int empty(Pilha* pilha){
    if(pilha==NULL)
        return 1;
    return 0;
}

void pre_ordem (no *raiz){
    if(raiz==NULL)
        return;
    Pilha* impressao = NULL;
    push(&impressao, raiz);
    while(!empty(impressao)){
        no* atual = pop(&impressao);
        printf("%d ",  atual->dado);
        push(&impressao, atual->dir);
        push(&impressao, atual->esq);
    }
    printf("\n");
}