// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1028

#include <stdio.h>

int main ()
{
    long long soma=0;
    char num;

    while(scanf("%c", &num)!=EOF){
        if(num>='0' && num<='9')
            soma+= (num - '0');
    }
    if(soma%3==0)
        printf("Sim\n");
    else
        printf("Nao\n");
    
    return 0;
}