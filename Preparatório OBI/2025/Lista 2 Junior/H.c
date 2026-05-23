#include <stdio.h>

int main ()
{
    int infectedTotal,factor,goal,days=0;
    scanf("%d %d %d", &infectedTotal, &factor, &goal);
    int infectedNow = infectedTotal;
    while(infectedTotal<goal)
    {
        infectedNow*=factor;
        infectedTotal+=infectedNow;
        days++;
    }
    printf("%d",days);
    return 0;
}
