#include <stdio.h>

int main ()
{
    int fullDistance;
    int moreD,lessD,totalD=0;
    scanf("%d %d %d",&fullDistance,&moreD,&lessD);
    int i=0;
    while(1)
    {
        i++;
        totalD+=moreD;
        if(totalD>=fullDistance) break;
        totalD-=lessD;
    }
    printf("%d",i);
    return 0;
}