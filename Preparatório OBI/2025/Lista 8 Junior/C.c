#include <stdio.h>

int main ()
{
    int n;
    int peakCounter=0;
    scanf("%d",&n);
    int numbers[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }
    if(numbers[0]>numbers[1])
    {
        peakCounter++;
    }
    if(numbers[n-1]>numbers[n-2])
    {
        peakCounter++;
    }
    for(int i=0;i<n-2;i++)
    {
        if(numbers[i+1]>numbers[i] && numbers[i+1]>numbers[i+2])
        {
            peakCounter++;
        }
    }
    if(peakCounter==1)
    {
        printf("N");
        return 0;
    }
    printf("S");
    return 0;
}