#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int sequence[n];
    int total=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &sequence[i]);
    }
    for(int i=0; i<n-2; i++)
    {
        if(sequence[i]==1 && sequence[i+1]==0 && sequence[i+2]==0)
        {
            total++;
        }
    }
    printf("%d\n", total);
}