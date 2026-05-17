// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2018f1pj_basquete

#include <stdio.h>

int main ()
{
    int pontuacao,resposta=1;
    scanf("%d",&pontuacao);
    
    if(pontuacao>800)
        resposta++;
    if(pontuacao>1400)
        resposta++;

    printf("%d\n",resposta);

    return 0;
}