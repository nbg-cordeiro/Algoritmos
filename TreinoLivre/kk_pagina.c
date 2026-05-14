// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.kk-pagina

#include <stdio.h>
#include <stdlib.h>

int ler_inteiro() {
    int c = getchar_unlocked();
    while (c < '0' || c > '9'){
        if (c == EOF) 
            return -1;
        c = getchar_unlocked();
    }
    int res = 0;
    while (c >= '0' && c <= '9') {
        res = res * 10 + (c - '0');
        c = getchar_unlocked();
    }
    return res;
}
// eu não fiz esse carinha aqui não ^^^^
    
void swap(int* a, int*b){
    int aux = *a;
    *a=*b;
    *b=aux;
}

int particiona(int* vetor, int inicio, int fim){
    int menores = inicio-1;
    int meio = inicio + (fim-inicio)/2;
    int pivot = vetor[meio];
    swap(&vetor[meio], &vetor[fim]);
    for(int j=inicio; j<fim; j++){
        if(vetor[j]<=pivot){
            menores++;
            swap(vetor+j, vetor+menores);
        }
    }
    menores++;
    swap(vetor+fim, vetor+menores);
    return menores;
}

void quickSort(int* vetor, int inicio, int fim) {
    if (inicio >= fim) 
        return;
    int posPivo = particiona(vetor, inicio, fim); 
    quickSort(vetor, inicio, posPivo - 1);
    quickSort(vetor, posPivo + 1, fim);
}

void quickSelect(int* vetor, int inicio, int fim, int target){
    while(inicio<fim){
        int pivot = particiona(vetor, inicio, fim);
        if(pivot==target)
            return;
        if(pivot<=target)
            inicio=pivot+1;
        else
            fim=pivot-1;
    }
}

int main (){
    int n, porPagina, alvo;
    scanf("%d %d %d", &n, &alvo, &porPagina);

    int inicio = alvo*porPagina;
    if (inicio >= n)
        return 0;
    int fim = ((alvo+1)*porPagina)-1;
    if(fim >= n)
        fim=n-1;

    int* vetor = malloc(sizeof(int)*n);
    for(int i=0; i<n; i++)
        vetor[i] = ler_inteiro();

    quickSelect(vetor,0,n-1,fim);
    quickSelect(vetor,0,fim,inicio);
    quickSort(vetor,inicio,fim);

    for(int i=inicio; i<=fim; i++)
        printf("%d\n", vetor[i]);

    return 0;
}