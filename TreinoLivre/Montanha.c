// enunciado.c
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2017f2pj_montanha

#include <stdio.h>

int main ()
{
    int tamanho, picos = 0;
    char resposta = 'N';
    scanf("%d", &tamanho);
    int sequencia[tamanho];

    for(int i=0; i< tamanho; i++)
        scanf("%d",&sequencia[i]);

    if(sequencia[0]>sequencia[1])
        picos++;
    if(sequencia[tamanho-1]>sequencia[tamanho-2])
        picos++;

    for(int i=2; i < tamanho-1 && picos<2; i++)
    {
        if(sequencia[i]>sequencia[i+1] && sequencia[i]>sequencia[i-1])
            picos++;
    }
    if(picos>1)
        resposta='S';

    printf("%c",resposta);

    return 0;
}