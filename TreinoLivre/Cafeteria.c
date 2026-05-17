// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2025f1p2_cafeteria

#include <stdio.h>

int main ()
{
    int minimo, maximo, capacidade, dose;
    scanf("%d %d %d %d", &minimo, &maximo, &capacidade, &dose);

    char possivel = 'N';
    int total = capacidade;

    for(int i=1; total>=0; i++)
    {
        total -= dose;
        if(total>=minimo && total<=maximo)
        {
            possivel = 'S';
            break;
        }
    }

    printf("%c\n", possivel);


    return 0;
}