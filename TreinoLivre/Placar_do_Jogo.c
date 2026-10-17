// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2025f2pj_placar

#include <stdio.h>

int main ()
{
    int total, pontuacaoUm=0,pontuacaoDois=0, auxiliar, gols=0;
    int tempo[101]={0};

    scanf("%d", &total);
    gols+=total;
    for(int i=0; i<total; i++)
    {
        scanf("%d", &auxiliar);
        tempo[auxiliar]=1;
    }

    scanf("%d", &total);
    gols+=total;
    for(int i=0; i<total; i++)
    {
        scanf("%d", &auxiliar);
        tempo[auxiliar]=2;
    }

    auxiliar=0;
    printf("0 0\n");
    for(int i=0; i<101 && auxiliar<gols; i++)
    {
        if(tempo[i]==2){
            auxiliar++;
            pontuacaoDois++;
            printf("%d %d\n", pontuacaoUm, pontuacaoDois);
        }
        if(tempo[i]==1){
            auxiliar++;
            pontuacaoUm++;
            printf("%d %d\n", pontuacaoUm, pontuacaoDois);
        }
    }

    return 0;
}