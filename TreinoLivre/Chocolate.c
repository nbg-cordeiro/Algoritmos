// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2012f2pj_chocolate

#include <stdio.h>

int main ()
{
    int tamLadoPedaco, quantPedacos = 1;
    scanf("%d",&tamLadoPedaco);

    while(tamLadoPedaco>=2)
    {
        tamLadoPedaco/=2;
        quantPedacos*=4;
    }

    printf("%d",quantPedacos);

    return 0;
}