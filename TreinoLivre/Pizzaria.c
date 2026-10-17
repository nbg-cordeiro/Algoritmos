// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2025f1pj_pizzaria

#include <stdio.h>

int main ()
{
    int grande, pequena, amigos;
    scanf("%d %d", &grande, &pequena);
    amigos = (grande*8) + (pequena*4) - 2;

    printf("%d", amigos);

    return 0;
}