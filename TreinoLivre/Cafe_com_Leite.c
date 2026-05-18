// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2025f1pj_leite

#include <stdio.h>

int main ()
{
    int capacidade, minLeite, maxLeite, cafe;
    char resposta = 'N';
    scanf("%d %d %d %d", &minLeite, &maxLeite, &capacidade, &cafe);
    
    capacidade-=cafe;
    if(capacidade<=maxLeite && capacidade>=minLeite)
        resposta='S';

    printf("%c", resposta);

    return 0;
}