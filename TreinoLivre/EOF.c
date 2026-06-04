// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.eof

#include <stdio.h>

int main ()
{
    int num, i=0;
    while(scanf("%d", &num)!=EOF)
    {
        i++;
    }

    printf("%d", i);

    return 0;
}