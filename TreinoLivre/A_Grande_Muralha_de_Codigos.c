// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=monitores.grande-muralha-codigos

#include <stdio.h>

int main ()
{
    int n, estado = 0;
    scanf("%d", &n);
    int tijolos[n];

    for(int i=0; i < n; i++)
        scanf("%d", &tijolos[i]);
    
    for(int i=1; i < n; i++)
    {
        if(tijolos[i]<=tijolos[i-1] && !estado)
            estado=1;
        if(estado)
        {
            if(tijolos[i]>=tijolos[i-1])
            {
                printf("Algo errado na muralha...");
                return 0;
            }
        }
    }

    if(estado)
        printf("Muralha segura!");
    else 
        printf("Algo errado na muralha...");

    return 0;
}