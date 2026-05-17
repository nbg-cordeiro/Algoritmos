// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2024f1pj_bacterias

#include <stdio.h>

int main ()
{
    int capacidade, taxaDeReproducao, dias=-1, bacterias=1;
    scanf("%d %d", &capacidade, &taxaDeReproducao);

    while(bacterias<=capacidade)
    {
        bacterias*=taxaDeReproducao;
        dias++;
    }

    printf("%d", dias);

    return 0;
}