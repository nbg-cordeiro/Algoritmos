// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=monitores.ajude-a-professora

#include <stdio.h>
#include <stdlib.h>

void merge(int* vetor, int inicio, int meio, int fim, int* aux){
    int esq = inicio;
    int dir = meio+1;
    int pos = 0;
    while(esq<=meio && dir<=fim){
        if(vetor[esq]<=vetor[dir]){
            aux[pos]=vetor[esq];
            esq++;
        }else{
            aux[pos]=vetor[dir];
            dir++;
        }
        pos++;
    }
    while(esq<=meio){
        aux[pos]=vetor[esq];
        esq++;
        pos++;
    }
    while(dir<=fim){
        aux[pos]=vetor[dir];
        dir++;
        pos++;
    }
    for(int i=0; i<pos; i++)
        vetor[inicio+i]=aux[i];
}

void mergeSort(int* vetor, int inicio, int fim, int* aux){
    if(inicio<fim){
        int meio = inicio + (fim-inicio)/2;
        mergeSort(vetor,inicio,meio, aux);
        mergeSort(vetor,meio+1, fim, aux);
        merge(vetor,inicio,meio,fim, aux);
    }
}

int main (){
    int n;
    scanf("%d", &n);

    int* matriculas = malloc(sizeof(int)*n);
    int* aux = malloc(sizeof(int)*n);

    for(int i=0; i<n; i++)
        scanf("%d",&matriculas[i]);

    mergeSort(matriculas,0,n-1, aux);

    for(int i=0; i<n; i++)
        printf("%09d%c", matriculas[i],(i==n-1 ? '\n' : ' '));
    
    free(aux);
    free(matriculas);
    return 0;
}