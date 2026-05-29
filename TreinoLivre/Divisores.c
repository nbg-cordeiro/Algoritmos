// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2015f1pu_divisores

#include <stdio.h>

int main ()
{
    int numero, expoente, divisores = 1,  fator = 2;
    scanf("%d",&numero);

    while(fator * fator <= numero)
    {
        expoente=0;
        while(numero % fator == 0)
        {
            expoente++;
            numero/=fator;
        }
        if(expoente > 0)
            divisores*=(expoente+1);
        fator++;
    }
    if(numero > 1)
        divisores*=2;

    printf("%d",divisores);

    return 0;
}