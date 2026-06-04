// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2023f1p2_estoque

#include <stdio.h>

int main ()
{
    int nTipos, nTamanhos, vendas, total=0;
    scanf("%d %d", &nTipos, &nTamanhos);
    int estoque[nTipos][nTamanhos];

    for(int i=0; i<nTipos; i++)
    {
        for(int j=0; j<nTamanhos; j++)
            scanf("%d",&estoque[i][j]);
    }

    scanf("%d",&vendas);

    int tipo,tamanho;
    for(int i=0; i<vendas; i++)
    {
        scanf("%d %d", &tipo, &tamanho);
        if(estoque[tipo-1][tamanho-1]>0)
        {
            estoque[tipo-1][tamanho-1]--;
            total++;
        }
    }

    printf("%d",total);

    return 0;
}