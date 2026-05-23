// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor2

#include <stdio.h>

int main ()
{
    int n, menor, menorIndex=0;
    scanf("%d", &n);
    scanf("%d", &menor);

    for(int i=1; i<n; i++)
    {
        int valor;
        scanf("%d", &valor);
        if(valor<menor)
        {
            menor=valor;
            menorIndex=i;
        }
    }

    printf("%d\n", menorIndex);

    return 0;
}