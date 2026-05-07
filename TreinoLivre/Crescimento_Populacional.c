// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.crescimento_populacional

#include <stdio.h>

int main (){
    int n;
    long long populA, populB;
    double taxaA, taxaB;

    scanf("%d", &n);

    while(n--){
        scanf("%lld %lld %lf %lf", &populA, &populB, &taxaA, &taxaB);
        int anos = 0;
        while(populA<=populB){
            if(anos>100)
                break;
            populA += populA*(taxaA/100);
            populB += populB*(taxaB/100);
            anos++;
        }
        if(anos>100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", anos);
    }

    return 0;
}