// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor5

#include <stdio.h>

int main ()
{
    int pertence = 0, n, objetivo;
    scanf("%d", &n);
    int vetor[n];

    for(int i=0; i<n; i++)
        scanf("%d", &vetor[i]);
    scanf("%d", &objetivo);

    for(int i=0; i<n && !pertence; i++)
    {
        if(vetor[i]==objetivo)
            pertence=1;
    }

    if(pertence)
        printf("pertence\n");
    else
        printf("nao pertence\n");

    return 0;
}