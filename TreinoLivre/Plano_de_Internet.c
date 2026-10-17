// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2021f1pj_plano

#include <stdio.h>

int main ()
{
    int total=0, meses, quota, usoAtual;
    scanf("%d %d", &quota, &meses);
    total=(meses+1)*quota;

    for(int i=0; i<meses; i++)
    {
        scanf("%d", &usoAtual);
        total-=usoAtual;
    }

    printf("%d", total);

    return 0;
}