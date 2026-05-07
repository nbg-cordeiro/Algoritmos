// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.saet24-Jjogo_da_forca

#include <stdio.h>

int main (){
    char palavra[105];
    scanf("%s", palavra);

    int tamanho = 0;
    while(palavra[tamanho]!='\0')
        tamanho++;

    char resposta[105];
    for(int i=0; i<tamanho; i++)
        resposta[i]='_';
    resposta[tamanho]='\0';

    int letra;
    while((letra=getchar())!=EOF){
        if(letra=='*')
            break;
        if(letra<'a'|| letra>'z')
            continue;
        for(int i=0; i<tamanho; i++){
            if(palavra[i]==letra)
                resposta[i]=letra;
        }
        printf("%s\n", resposta);
    }
    return 0;
}