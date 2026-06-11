// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2016f1pj_lampadas

#include <stdio.h>

int main ()
{
    int lampada1=0, lampada2=0, n,comando;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &comando);
        if(comando==1)
            lampada1 = !lampada1;
        if(comando==2)
        {
            lampada2 = !lampada2;
            lampada1 = !lampada1;
        }
    }

    printf("%d\n%d\n", lampada1, lampada2);

    return 0;
}