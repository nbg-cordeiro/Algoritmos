// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2015f1pj_mobile

#include <stdio.h>

int main ()
{
    int a,b,c,d;
    char resultado = 'N';

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((a == (b + c + d)) && (d == b + c) && (b == c)) 
        resultado = 'S';

    printf("%c",resultado);

    return 0;
}