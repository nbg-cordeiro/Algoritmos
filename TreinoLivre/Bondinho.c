// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2017f1pj_bondinho

#include <stdio.h>

int main ()
{
    int alunos,monitores, total=0;
    scanf("%d %d",&alunos,&monitores);
    total = alunos + monitores;

    if(total>50)
        printf("N\n");
    else
        printf("S\n");

    return 0;
}