// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=monitores.bee-pre-in-posfixa

#include <stdio.h>

void posfixo(char* arvorePre, char* arvoreInf, int tamanho) {
    if (tamanho <= 0) return;
    
    int meio;

    for(int i = 0; i < tamanho; i++){
        if(arvorePre[0] == arvoreInf[i]){
            meio = i;
            break;
        }
    }

    posfixo(arvorePre + 1, arvoreInf, meio);
    posfixo((arvorePre + meio) + 1, (arvoreInf + meio) + 1, (tamanho - meio) - 1);

    printf("%c", arvorePre[0]);
}

int main() {
    int quantidade;
    
    scanf("%d", &quantidade);
    
    while(quantidade--){
        int tamanho;
        scanf("%d", &tamanho);
        
        char arvorePre[tamanho + 1];
        char arvoreInf[tamanho + 1];

        scanf("%s %s", arvorePre, arvoreInf);

        posfixo(arvorePre, arvoreInf, tamanho);
        printf("\n");
    }
    
    return 0;
}