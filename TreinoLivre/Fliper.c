// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2014f1pj_fliper

#include <stdio.h>

int main ()
{
    char saida = 'C';
    int escolha1,escolha2;
    scanf("%d %d",&escolha1, &escolha2);

    if(escolha1){
        saida='B';
        if(escolha2)
            saida='A';
    }

    printf("%c",saida);

    return 0;
}