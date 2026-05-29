// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2017f1pj_drone

#include <stdio.h>

int main ()
{
    int ladoA,ladoB,ladoC, janelaA,janelaB;
    scanf("%d %d %d %d %d", &ladoA, &ladoB, &ladoC, &janelaA, &janelaB);
    
    if((ladoA<=janelaA && ladoB<=janelaB)||(ladoA<=janelaB && ladoB<=janelaA)||
       (ladoA<=janelaA && ladoC<=janelaB)||(ladoA<=janelaB && ladoC<=janelaA)||
       (ladoB<=janelaA && ladoC<=janelaB)||(ladoB<=janelaB && ladoC<=janelaA))
        printf("S\n");
    else
        printf("N\n");

    return 0;
}