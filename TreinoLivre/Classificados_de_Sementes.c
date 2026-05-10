// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.classificado-agronomia

#include <stdlib.h>
#include <stdio.h>

typedef struct Semente {
    unsigned long long int codigo;
    int qualidade;
} Semente;

void swap(Semente* a, Semente* b) {
    Semente aux = *a;
    *a = *b;
    *b = aux;
}

int particiona(Semente* vetor, int inicio, int fim) {
    int mid = inicio + (fim - inicio) / 2;
    swap(&vetor[mid], &vetor[fim]);
    
    Semente pivo = vetor[fim];
    int menores = inicio;
    
    for (int i = inicio; i < fim; i++) {
        if (vetor[i].qualidade < pivo.qualidade || 
           (vetor[i].qualidade == pivo.qualidade && vetor[i].codigo < pivo.codigo)) {
            
            swap(&vetor[i], &vetor[menores]);
            menores++;
        }
    }
    
    swap(&vetor[menores], &vetor[fim]);
    return menores;
}

Semente quickselect(Semente* vetor, int inicio, int fim, int target) {
    if (inicio >= fim) return vetor[inicio];
    
    int pivot = particiona(vetor, inicio, fim);
    
    if (pivot == target) {
        return vetor[pivot];
    }
    if (pivot > target) {
        return quickselect(vetor, inicio, pivot - 1, target);
    }
    return quickselect(vetor, pivot + 1, fim, target);
}

int particionaCodigo(Semente* vetor, int inicio, int fim) {
    int mid = inicio + (fim - inicio) / 2;
    swap(&vetor[mid], &vetor[fim]);
    
    Semente pivo = vetor[fim];
    int menores = inicio;
    
    for (int i = inicio; i < fim; i++) {
        if (vetor[i].codigo < pivo.codigo) {
            swap(&vetor[i], &vetor[menores]);
            menores++;
        }
    }
    swap(&vetor[menores], &vetor[fim]);
    return menores;
}

void quickSort(Semente* vetor, int inicio, int fim) {
    if (inicio < fim) {
        int posPivo = particionaCodigo(vetor, inicio, fim); 
        quickSort(vetor, inicio, posPivo - 1);
        quickSort(vetor, posPivo + 1, fim);
    }
}

int main() {
    int k;
    scanf("%d", &k);
    
    Semente* sementes = malloc(sizeof(Semente) * 10000001);

    int i = 0;
    while (scanf("%llu %d", &sementes[i].codigo, &sementes[i].qualidade) != EOF)
        i++;
    
    if (k > i) 
        k = i; 

    if (k > 0 && i > 0) {
        quickselect(sementes, 0, i - 1, k - 1);
        quickSort(sementes, 0, k - 1);
    }
    
    for (int j = 0; j < k; j++) 
        printf("%llu %d\n", sementes[j].codigo, sementes[j].qualidade);
    
    free(sementes);
    return 0;
}