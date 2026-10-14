// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2020f1pj_piloto

#include <stdio.h>

int main ()
{
    int a,b,c, resposta=0;
    scanf("%d %d %d", &a,&b, &c);

    if(b-a > c-b)
        resposta=-1;
    if(b-a < c-b)
        resposta=1;

    printf("%d",resposta);

    return 0;
}