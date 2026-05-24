// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2013f1pj_tomadas

#include <stdio.h>

int main ()
{
    int tomadas,total=-3;

    for(int i=0; i<4; i++)
    {
        scanf("%d",&tomadas);
        total+=tomadas;
    }

    printf("%d",total);

    return 0;
}