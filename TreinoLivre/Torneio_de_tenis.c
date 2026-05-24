// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2021f1pj_torneio

#include <stdio.h>

int main ()
{
    int total = 0, resposta=-1;
    char letra;
    while(scanf("%c", &letra)==1)
    {
        if(letra=='V')
            total++;
    }
    switch (total)
    {
        case 1: case 2: 
            resposta=3;
            break;
        case 3: case 4:
            resposta=2;
            break;
        case 5: case 6:
            resposta=1;
    }

    printf("%d", resposta);

    return 0;
}