// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2020f1pj_camisetas

#include <stdio.h>

int main ()
{
    int  n,escolha,totalP,totalM,qtdP=0,qtdM=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &escolha);
        if(escolha-1)
            qtdM++;
        else
            qtdP++;
    }
    scanf("%d %d", &totalP, &totalM);
    
    if(qtdM==totalM && qtdP == totalP)
        printf("S");
    else
        printf("N");

    return 0;
}