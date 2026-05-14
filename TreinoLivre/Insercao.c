// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.ordenainsercao

#include <stdio.h>

void insertionSort(int* vetor, int tamanho){
    for(int i=1; i<tamanho; i++){
        int valor = vetor[i];
        int j = i;
        while(j>0){
            if(vetor[j-1] <= valor)
                break;
            vetor[j]=vetor[j-1];
            j--;
        }
        vetor[j]=valor;
    }
}

int main (){
    int vetor[50005];
    int tamanho=0;

    while((scanf("%d", &vetor[tamanho]))!=EOF)
        tamanho++;

    insertionSort(vetor,tamanho);

    for(int i=0; i<tamanho; i++){
        if(i)
            putchar(' ');
        printf("%d", vetor[i]);
    }
    putchar('\n');
    
    return 0;
}