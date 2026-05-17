// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2024f2pj_atletismo

#include <stdio.h>

int main ()
{
    int n,atleta;
    scanf("%d", &n);
    int ranking[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &atleta);
        ranking[atleta-1]=i+1;
    }

    for(int i=0; i<n; i++)
        printf("%d\n", ranking[i]);

    return 0;
}