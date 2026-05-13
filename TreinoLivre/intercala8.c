// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.intercala8

#include <stdio.h>
#include <stdlib.h>

int* intercala2(int* vetor1, int tamanho1, int* vetor2, int tamanho2){
    if (tamanho1 + tamanho2 == 0){
        free(vetor1);
        free(vetor2);
        return NULL;
    }

    int* aux = malloc(sizeof(int)*(tamanho1+tamanho2));
    int ptr1=0, ptr2=0, ptrAux=0;

    while(ptr1<tamanho1 && ptr2 < tamanho2){
        if(vetor1[ptr1]<vetor2[ptr2])
            aux[ptrAux++]=vetor1[ptr1++];
        else
            aux[ptrAux++]=vetor2[ptr2++];
    }

    while(ptr1<tamanho1)
        aux[ptrAux++]=vetor1[ptr1++];
    while(ptr2<tamanho2)
        aux[ptrAux++]=vetor2[ptr2++];

    free(vetor1);
    free(vetor2);
    return aux;
}

int main(){
    int tamanho1, counter=7;
    int* vetor1 = NULL;
    scanf("%d", &tamanho1);

    if(tamanho1>0){
        vetor1 = malloc(sizeof(int)*tamanho1);
        for(int j=0; j<tamanho1; j++)
            scanf("%d", &vetor1[j]);
    }

    while(counter--){
        int tamanho2;
        int* vetor2 = NULL;
        scanf("%d", &tamanho2);
        
        if(tamanho2 > 0){
            vetor2 = malloc(sizeof(int)*tamanho2);
            for(int j=0; j<tamanho2; j++)
                scanf("%d", &vetor2[j]);
        }

        vetor1 = intercala2(vetor1, tamanho1, vetor2, tamanho2);
        tamanho1+=tamanho2;
    }

    if(tamanho1>0)
        printf("%d", vetor1[0]);
    for(int i=1; i<tamanho1; i++){
        printf(" %d", vetor1[i]);
    }
    
    putchar('\n');

    free(vetor1);
    return 0;
}