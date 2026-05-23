// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor6

#include <stdio.h>

int main ()
{
    int n, num;
    scanf("%d", &n);
    int vetor[n];

    for(int i=0; i<n; i++)
        scanf("%d", &vetor[i]);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &num);
        vetor[i] += num;
    }

    for(int i=0; i<n; i++)
        printf("%d ", vetor[i]);

    return 0;
}