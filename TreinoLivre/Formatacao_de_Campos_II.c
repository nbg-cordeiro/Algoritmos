// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1090

#include <stdio.h>

int main ()
{
    char nome1[103], nome2[103];
    scanf("%[^,]%*c%*c", nome2);
    scanf("%[^\n]%*c", nome1);
    
    int i=1;
    while(nome1[i]!='\0')
    {
        nome1[i]+=32;
        i++;
    }
    i=1;
    while(nome2[i]!='\0')
    {
        nome2[i]+=32;
        i++;
    }

    printf("%s %s", nome1, nome2);

    return 0;
}