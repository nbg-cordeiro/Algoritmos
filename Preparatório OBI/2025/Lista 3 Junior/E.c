#include <stdio.h>

int main ()
{
    short n;
    scanf("%hd", &n);
    int quadrados[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &quadrados[i]);
    }
    int sinceZero = 100000;
    for(int i=0; i<n; i++)
    {
        if(quadrados[i]==0)
        {
            sinceZero = 0;
        }
        else
        {
            if(sinceZero < 9) sinceZero++;
            else sinceZero = 9;
            quadrados[i] = sinceZero;
        }
    }
    sinceZero = 100000;
    for(int i=n-1; i>=0; i--)
    {
        if(quadrados[i]==0)
        {
            sinceZero = 0;
        }
        else
        {
            if(sinceZero < 9) sinceZero++;
            else sinceZero = 9;
            if(sinceZero < quadrados[i])
                quadrados[i] = sinceZero;
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d", quadrados[i]);
        if(i < n-1) printf(" ");
    }
    printf("\n");
    return 0;
}