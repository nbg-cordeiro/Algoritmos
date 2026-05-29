// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2025f1pj_dieta

#include <stdio.h>

int main ()
{
    int carboidratos, proteinas, gorduras, calorias, limite, numAlimentos;
    scanf("%d %d", &numAlimentos, &limite);

    for(int i=0; i<numAlimentos; i++)
    {
        scanf("%d %d %d", &proteinas, &gorduras, &carboidratos);
        calorias =  (proteinas * 4) + (gorduras * 9) + (carboidratos * 4);
        limite -= calorias;
    }

    printf("%d\n", limite);

    return 0;
}