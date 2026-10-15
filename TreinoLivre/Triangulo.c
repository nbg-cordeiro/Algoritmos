// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2014f1p1_triangulo

#include <stdio.h>

int testeTriangulo (int a, int b, int c){
    if(a+b>c && a+c>b && b+c>a)
        return 1;
    return 0;
}

int main ()
{
    int varetas[4];
    char resposta = 'N';

    for(int i=0; i<4; i++)
        scanf("%d",&varetas[i]);

    if( testeTriangulo(varetas[0],varetas[1],varetas[2])||
        testeTriangulo(varetas[0],varetas[1],varetas[3])||
        testeTriangulo(varetas[0],varetas[2],varetas[3])||
        testeTriangulo(varetas[1],varetas[2],varetas[3]) )
        resposta = 'S';

    printf("%c",resposta);

    return 0;
}