// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2019f1pj_domino

#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    n++;
    n*=(n+1);
    n/=2;

    printf("%d\n", n);

    return 0;
}