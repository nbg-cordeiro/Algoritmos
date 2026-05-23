// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.numeros-perfeitos

#include <stdio.h>

int main ()
{
    long long n,pesoTotal;
    double nota, total;
    long long totalPonderado=0;

    scanf("%lld", &n);
    pesoTotal = (n*(n+1))/2;

    for(int j=1; j<=n; j++)
    {
        scanf("%lf", &nota);
        totalPonderado+=nota*j*10;
    }
    total= (double)totalPonderado/pesoTotal/10;

    if(total>=5.00)
        printf("Sim\n");
    else
        printf("Nao\n");
    printf("%.2lf\n", total);


    return 0;
}