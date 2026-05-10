// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.palavras_ordenadas

#include <stdio.h>

int tamanho(char* string){
    int tam=0;
    while(string[tam]!='\0')
        tam++;
    return tam;
}

int main (){
    char palavra[50];
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%s", palavra);
        int tam = tamanho(palavra);
        char ordenada = 'O';
        for(int i=1; i<tam; i++){
            char letraAtual = palavra[i];
            char letraAnterior = palavra[i-1];
            if(letraAtual>='A'&&letraAtual<='Z')
                letraAtual+=32;
            if(letraAnterior>='A'&&letraAnterior<='Z')
                letraAnterior+=32;
            if(letraAnterior>=letraAtual){
                ordenada='N';
                break;
            }
        }
        printf("%s: %c\n", palavra, ordenada);
    }
}