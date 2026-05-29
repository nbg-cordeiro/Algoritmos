// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1021

#include <stdio.h>

int main ()
{
    int n,total;
    scanf("%d", &n);
    total=n+1;

    while(n>=0){
        total+=n;
        n--;
    }

    printf("%d", total);

    return 0;
}