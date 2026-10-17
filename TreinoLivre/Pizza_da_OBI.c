// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2023f2pj_pizza

#include <stdio.h>

int main ()
{
    int participantes, pizzasOito, pizzasSeis, pedacosRestantes;
    scanf("%d %d %d", &participantes, &pizzasOito, &pizzasSeis);

    pedacosRestantes=(pizzasOito*8)+(pizzasSeis*6)-participantes;
    if(pedacosRestantes<0)
        pedacosRestantes=0;

    printf("%d", pedacosRestantes);

    return 0;
}