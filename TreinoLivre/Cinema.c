// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2022f1pj_cinema

#include <stdio.h>

int main ()
{
    int idade1,idade2,total=30;
    scanf("%d %d",&idade1,&idade2);

    if(idade1>=18)
        total+=15;
    if(idade1>=60)
        total-=10;
    if(idade2>=18)
        total+=15;
    if(idade2>=60)
        total-=10;

    printf("%d\n",total);

    return 0;
}