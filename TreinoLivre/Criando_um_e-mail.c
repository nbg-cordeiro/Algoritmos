// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.email

#include <stdio.h>

int main ()
{
    char nome1[100],nome2[100];
    scanf("%s",nome1);
    while(scanf("%s",nome2)!=EOF);
    
    int i=0;
    while(nome1[i]!='\0')
    {
        if (nome1[i]<'a')
            nome1[i]+=32;
        i++;
    }
    i=0;
    while(nome2[i]!='\0')
    {
        if(nome2[i]<'a')
            nome2[i]+=32;
        i++;
    }
    printf("%s.%s@unb.br",nome1,nome2);

    return 0;
}