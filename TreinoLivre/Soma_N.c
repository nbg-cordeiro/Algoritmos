// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.soma

#include <stdio.h>

int main ()
{
    int soma = 0, n, num;
    scanf("%d", &n);
    
    for(int i=0; i < n; i++)
    {
        scanf("%d", &num);
        soma+=num;
    }

    printf("%d",soma);

    return 0;
}