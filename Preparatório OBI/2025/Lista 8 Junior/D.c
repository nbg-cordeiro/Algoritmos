#include <stdio.h>

int main ()
{
    int n;
    scanf("%d\n",&n);
    int numbers[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }
    if(numbers[0]>8)
    {
        printf("N\n");
        return 0;
    }
    for(int i=0;i<(n-1);i++)
    {
        if((numbers[i+1]-numbers[i])>8)
        {
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}