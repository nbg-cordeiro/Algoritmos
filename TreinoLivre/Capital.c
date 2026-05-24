// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2013f1pj_capital

#include <stdio.h>

int main ()
{
    int areas[4];
    char resposta='N';

    for(int i=0; i<4; i++)
        scanf("%d",&areas[i]);

    if(areas[0]*areas[1]==areas[2]*areas[3]||
       areas[0]*areas[2]==areas[1]*areas[3]||
       areas[0]*areas[3]==areas[1]*areas[2] )
       resposta='S';
    
    printf("%c",resposta);
    
    return 0;
}
// sei que ficou BIZARRO, mas funciona!!!