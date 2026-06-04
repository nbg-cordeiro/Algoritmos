// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2014f1pj_gangorra

#include <stdio.h>

int main ()
{
    int peso1, peso2, tamanho1, tamanho2, equilibrio=0;
    scanf("%d %d %d %d", &peso1, &tamanho1, &peso2, &tamanho2); 

    if(peso1*tamanho1 > peso2*tamanho2)
        equilibrio=-1;
    if(peso1*tamanho1 < peso2*tamanho2)
        equilibrio=1;

    printf("%d\n", equilibrio);

    return 0;
}