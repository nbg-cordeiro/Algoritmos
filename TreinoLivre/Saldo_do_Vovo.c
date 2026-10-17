// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2013f1pj_saldo

#include <stdio.h>

int main ()
{
    int dias, saldoAtual;
    scanf("%d %d",&dias,&saldoAtual);
    int minimo = saldoAtual;

    int operacao;
    for(int i=0; i<dias; i++)
    {
        scanf("%d",&operacao);
        saldoAtual+=operacao;
        if(saldoAtual<minimo)
            minimo=saldoAtual;
    }

    printf("%d",minimo);

    return 0;
}