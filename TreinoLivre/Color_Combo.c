// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1025

#include <stdio.h>

int main ()
{
    int n, porPeca, pecas, total;
    scanf("%d", &n);
    int respostas[n];
    for(int i=0; i < n; i++)
    {
        total=0;
        scanf("%d %d", &porPeca, &pecas);
        if(pecas>=3)
            total+=porPeca;
        if(pecas-3)
            total+=(100*(pecas-3));
        if(pecas>7)
            total+=(total/2);
        else if (pecas>3)
            total+=(total/4);
        respostas[i]=total;
    }

    for(int i=0; i < n; i++)
    {
        printf("Caso %d: %d ponto", i+1,respostas[i]);
        if(respostas[i]>1)
            printf("s");
        printf("\n");
    }   
        
    return 0;
}