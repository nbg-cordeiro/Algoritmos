// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2020f1pj_escher

#include <stdio.h>

int main ()
{
    int n, soma;
    scanf("%d", &n);
    int grafico[n];
    for(int i=0; i<n; i++)
        scanf("%d", &grafico[i]);
    
    soma = grafico[0] + grafico[n-1];

    for(int i=0, j=(n-1); i<=j; i++, j--)
    {
        if(grafico[i]+grafico[j] != soma)
        {
            printf("N\n");
            return 0;
        }
    }

    printf("S\n");

    return 0;
}