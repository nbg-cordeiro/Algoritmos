// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2022f2p1_tanque

#include <stdio.h>

int main ()
{
    float distancia, consumo, tanque, total;
    scanf("%f %f %f", &consumo, &distancia, &tanque);

    total = distancia;
    total -= (tanque*consumo);
    total /= consumo;
    if(total<0)
        total=0;
        
    printf("%.1f", total);

    return 0;
}