// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.ajude_simplificado

#include <stdio.h>

int main ()
{
    int n1,n2, soma=0, resposta;
    scanf("%d %d %d", &soma, &n1, &n2);
    soma+=n1+n2;
    scanf("%d", &resposta);
    
    if(soma == resposta)
        printf("Acertou\n");
    else
        printf("Errou\n");

    return 0;
}