// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2025f1p2_barras

#include <stdio.h>

int main ()
{
    int n, max=-1;
    scanf("%d", &n);
    int respostas[n];
    
    for(int i=0; i < n; i++)
    {
        scanf("%d", &respostas[i]);
        if(respostas[i]>max)
            max=respostas[i];
    }

    for(int i=0; i < max; i++)
    {
        for(int j=0; j < n; j++)
        {
            if((max-i)<=(respostas[j]))
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}