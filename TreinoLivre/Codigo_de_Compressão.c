// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2023f2pj_codigo

#include <stdio.h>

int main ()
{
    int tamanho, contador=1;
    scanf("%d ", &tamanho);
    char caracteres[tamanho];
    
    for(int i=0; i<tamanho; i++)
        scanf("%c",&caracteres[i]);

    for(int i=1; i<tamanho; i++){
        if(caracteres[i]==caracteres[i-1])
            contador++;
        else{
            printf("%d %c ",contador,caracteres[i-1]);
            contador=1;
        }
    }
    printf("%d %c ",contador,caracteres[tamanho-1]);

    return 0;
}   