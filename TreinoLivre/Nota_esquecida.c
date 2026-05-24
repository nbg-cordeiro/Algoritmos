// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2019f2pj_nota

#include <stdio.h>

int main ()
{
    int nota, media;
    scanf("%d %d", &nota, &media);
    nota = (2*media)-nota;

    printf("%d",nota);

    return 0;
}