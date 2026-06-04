// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2021f1p1_zero

#include <stdio.h>

int main ()
{
    int n, lido, total = 0;
    scanf("%d", &n);
    int array[n];

    int j = 0;

    for(int i=0; i<n; i++,j++)
    {
        scanf("%d", &lido);
        if(!lido)
            j-=2;
        else
            array[j]=lido;
    }
    for(int i=0; i<j; i++)
        total+=array[i];

    printf("%d",total);

    return 0;
}