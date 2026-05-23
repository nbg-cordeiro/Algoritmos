// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2012f1pj_maior

#include <stdio.h>

int main ()
{
    int numero;
    scanf("%d", &numero);
    int maior = numero;
    
    while(numero!=0)
    {
        scanf("%d", &numero);
        if(numero>maior)
            maior = numero;
    }

    printf("%d", maior);

    return 0;
}