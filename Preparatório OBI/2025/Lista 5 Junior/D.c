#include <stdio.h>

int main()
{
    int alunos,pizzas,pedacos=0;;
    scanf("%d", &alunos);
    scanf("%d", &pizzas);
    pedacos+=8*pizzas;
    scanf("%d", &pizzas);
    pedacos+=6*pizzas;
    if(pedacos<=alunos)
    {
        printf("0");
    }
    else
    {
        printf("%d", pedacos-alunos);
    }
    return 0;
}