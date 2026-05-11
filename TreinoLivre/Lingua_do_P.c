// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2014f1p2_lingua

#include <stdio.h>

int main (){
    char mensagem[1005];
    fgets(mensagem, 1005, stdin);
    for(int i=0; mensagem[i]!='\0' && mensagem[i]!='\n'; i++){
        if(mensagem[i]=='p'){
            putchar(mensagem[i+1]);
            i++;
        }else if(mensagem[i]==' ')
            putchar(' ');
    }
    putchar('\n');

    return 0;
}