// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2019f1pj_idade

#include <stdio.h>

int main ()
{
    int idades[3], maior=-1;
    scanf("%d %d %d",&idades[0],&idades[1],&idades[2]);
    idades[0]-=(idades[1]+idades[2]);

    for(int i=0; i<3; i++)
    {
        if(idades[i]>maior)
            maior = idades[i];
    }

    printf("%d",maior);
    return 0;
}