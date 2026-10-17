// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2019f1pj_secreta

#include <stdio.h>

int main ()
{
    int n,atual, anterior=2, total=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &atual);
        if(atual!=anterior)
        {
            total++;
            anterior=atual;
        }
    }
    
    printf("%d",total);

    return 0;
}