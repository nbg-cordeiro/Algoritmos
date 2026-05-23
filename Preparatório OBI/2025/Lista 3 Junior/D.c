#include <stdio.h>

int main ()
{
    short n;
    scanf("%hd", &n);
    short pilha[n];
    short j=n-1;
    for(short i=0;i<n;i++)
    {
        scanf("%hd", &pilha[i]);
    }
    short goal=pilha[0]+pilha[j];
    for(short i=0;i<n && i<=j;i++,j--)
    {
        if(pilha[i]+pilha[j]!=goal)
        {
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}