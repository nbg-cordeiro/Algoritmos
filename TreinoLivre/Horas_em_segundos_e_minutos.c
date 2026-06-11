// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.horas_segundos

#include <stdio.h>

int main ()
{
    long long horas;
    scanf("%lld",&horas);

    long long minutos = horas * 60;
    long long segundos = minutos * 60;

    printf("%lld\n%lld\n", minutos, segundos);

    return 0;
}