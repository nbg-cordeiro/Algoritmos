// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor7

#include <stdio.h>

int main ()
{
    int n, igual=1,num;
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++)
        scanf("%d", &vetor[i]);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &num);
        if(vetor[i]!=num)
            igual=0;
    }

    if(igual)
        printf("sim\n");
    else
        printf("nao\n");

    return 0;
}