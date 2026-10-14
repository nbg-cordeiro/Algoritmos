// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2018f2pj_pesos

#include <stdio.h>

int main ()
{
    int n;
    char resposta = 'S';
    scanf("%d", &n);
    int caixas[n];

    for(int i=0; i<n; i++)
        scanf("%d", &caixas[i]);

    if(caixas[0]>8)
        resposta = 'N';
    for(int i=1; i<n && resposta != 'N'; i++)
    {
        if((caixas[i]-caixas[i-1])>8)
            resposta = 'N';
    }

    printf("%c",resposta);

    return 0;
}