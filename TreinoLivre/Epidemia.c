// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2023f1pj_epidemia

#include <stdio.h>

int main ()
{
    int total, infectados, fator, alvo,dia = 0;
    scanf("%d %d %d", &infectados, &fator, &alvo);
    total=infectados;

    while(total<alvo){
        infectados*=fator;
        total+=infectados;
        dia++;
    }

    printf("%d", dia);


    return 0;
}