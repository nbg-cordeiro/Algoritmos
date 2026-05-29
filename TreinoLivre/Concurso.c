// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2024f1pj_concurso

#include <stdio.h>

int main ()
{
    int notas[101]={0};
    int n, meta, nota, soma=0;
    scanf("%d %d", &n, &meta);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &nota);
        notas[nota]++;
    }
    int notaDeCorte=100;
    for(; soma<meta; notaDeCorte--)
        soma+=notas[notaDeCorte];
    
    printf("%d\n", notaDeCorte+1);

    return 0;
}