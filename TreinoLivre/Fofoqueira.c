// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.saet24-Ffofoqueira

#include <stdio.h>

int main (){
    int letra, anterior=-1, contador=0;
    while((letra=getchar())!=EOF && letra>='a' && letra<='z'){
        if(anterior==-1)
            anterior=letra;
        if(letra!=anterior){
            printf("%d",contador);
            contador=0;
        }
        if(contador==0)
            printf("%c", letra);
        contador++;
        anterior = letra;
    }
    printf("%d",contador);
    putchar('\n');

    return 0;
}