// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2020f1p2_irmaos

#include <stdio.h>

int main ()
{
    int idade1,idade2;
    scanf("%d %d", &idade1, &idade2);
    idade2+=(idade2-idade1);

    printf("%d",idade2);

    return 0;
}