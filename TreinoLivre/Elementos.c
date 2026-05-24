// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1014

#include <stdio.h>

int main ()
{
    char palavra1[7], palavra2[7];
    int dano;
    scanf("%s %s %d", palavra1, palavra2, &dano);

    switch (palavra2[1])
    {
    case 'o':
        switch (palavra1[1])
        {
            case 'r': dano/=2; break;
            case 'g': dano*=2; break;
            case 'e': dano=0; 
        }
    break;
    case 'g':
        switch (palavra1[1])
        {
            case 'o': dano/=2; break;
            case 'e': dano*=2; break;
            case 'r': dano=0;
        }
    break;
    case 'e':
        switch (palavra1[1])
        {
            case 'g': dano/=2; break;
            case 'r': dano*=2; break;
            case 'o': dano=0; 
        }
    break;
    case 'r':
        switch (palavra1[1])
        {
            case 'e': dano/=2; break;
            case 'o': dano*=2; break;
            case 'g': dano=0; 
        }
    break;
    }

    printf("%d",dano);

    return 0;
}