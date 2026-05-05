// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.sequencia-desgustacao

#include <stdlib.h>
#include <stdio.h>

typedef struct Sequencia{
    int tamanho;
    char caractere;
    int posicao;
}Sequencia;

void merge(Sequencia* vetor, int inicio, int meio, int fim, Sequencia* aux){
    int esq = inicio;
    int dir = meio+1;
    int pos = 0;
    while(esq<=meio && dir<=fim){
        if(vetor[esq].tamanho>=vetor[dir].tamanho){
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

void mergeSort(Sequencia* vetor, int inicio, int fim, Sequencia* aux){
    if(inicio<fim){
        int meio = inicio + (fim-inicio)/2;
        mergeSort(vetor,inicio,meio, aux);
        mergeSort(vetor,meio+1, fim, aux);
        merge(vetor,inicio,meio,fim, aux);
    }
}

int main(){
    Sequencia* sequencias = malloc(sizeof(Sequencia)*100005);
    Sequencia* aux = malloc(sizeof(Sequencia)*100005);
    
    int tamAtual=1, inicio=0, seqAtual=0, i=1;
    char* string = malloc(sizeof(Sequencia)*100005);
    scanf("%s", string);
    while(1){
        if(string[i]==string[i-1] && string[i]!='\n' && string[i]!='\0')
            tamAtual++;
        else{
            sequencias[seqAtual].caractere=(char)string[i-1];
            sequencias[seqAtual].posicao=inicio;
            sequencias[seqAtual].tamanho=tamAtual;
            tamAtual=1;
            inicio=i;
            seqAtual++;
        }
        if(string[i]=='\n' || string[i]=='\0')
            break;
        i++;
    }
    mergeSort(sequencias,0,seqAtual-1,aux);

    for(int j=0; j<seqAtual; j++)
        printf("%d %c %d\n", sequencias[j].tamanho, sequencias[j].caractere, sequencias[j].posicao);

    free(sequencias);
    free(aux);
    free(string);
    return 0;
}
