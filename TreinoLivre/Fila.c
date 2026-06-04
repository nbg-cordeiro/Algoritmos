// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2025f1p1_fila

#include <stdio.h>

int main ()
{
    int totalAlunos, escondidos=0;
    scanf("%d", &totalAlunos);
    int alunos[totalAlunos];

    for(int i=0; i<totalAlunos; i++)
        scanf("%d", &alunos[i]);
    int referencia = alunos[totalAlunos-1];
    for(int i=totalAlunos-2; i>=0; i--)
    {
        if(alunos[i]>referencia)
            referencia=alunos[i];
        else
            escondidos++;
    }

    printf("%d",escondidos);

    return 0;
}