// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.ordenasimples

#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int* vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        int ordenado=1;
        for(int j=0; j<(tamanho-i-1);j++){
            if(vetor[j]>vetor[j+1]){
                swap(vetor+j, vetor+j+1);
                ordenado=0;
            }
        }
        if(ordenado)
            return;
    }
}

int main (){
    int tamanho=0;
    int vetor[1005];

    while((scanf("%d",&vetor[tamanho]))!=EOF)
        tamanho++;

    bubbleSort(vetor,tamanho);

    for(int i=0; i<tamanho; i++){
        if(i)
            putchar(' ');
        printf("%d", vetor[i]);
    }
    putchar('\n');

    return 0;
}