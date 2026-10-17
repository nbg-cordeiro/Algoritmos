// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2020f1pj_relogio

#include <stdio.h>

int main ()
{
    int repouso, atual, oxigenacao;
    scanf("%d %d %d", &repouso, &atual, &oxigenacao);

    if(atual > 3*repouso || oxigenacao < 95)
        printf("diminuir\n");
    else if(atual < 2*repouso && oxigenacao > 97)
        printf("aumentar\n");
    else
        printf("manter\n");

    return 0;
}