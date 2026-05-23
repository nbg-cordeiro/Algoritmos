// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2020f1pj_tesouro

#include <stdio.h>

int main ()
{
    int moedas, marinheiros;
    scanf("%d %d", &moedas, &marinheiros);
    
    moedas/=(marinheiros+2);
    moedas*=2;

    printf("%d",moedas);

    return 0;
}