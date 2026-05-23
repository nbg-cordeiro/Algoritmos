// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1035

#include <stdio.h>

int main ()
{
    int inicio, quantidade;
    scanf("%d %d", &inicio, &quantidade);
    if(quantidade%2)
        printf("-1");
    else
        printf("%d",inicio+quantidade-1);

    return 0;
}