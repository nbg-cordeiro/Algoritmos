// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.saet24-Bbolanacci

#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);

    int termoN = (6*n) - 3;
    if(n&1)
        termoN+=1;
    else
        termoN-=1;
    termoN/=4;

    printf("%d\n", termoN);
    return 0;
}