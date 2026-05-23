#include <stdio.h>

int main ()
{
    int totalStations;
    scanf("%d",&totalStations);
    int totalCommands;
    scanf("%d",&totalCommands);
    int targetStation;
    scanf("%d",&targetStation);
    int currentStation=1;
    int command=2;
    int moments=0;
    if(currentStation==targetStation)
    {
        moments++;
    }
    for(int i=0;i<totalCommands;i++)
    {
        scanf("%d",&command);
        if(command==1)
        {
            currentStation++;
            if(currentStation>totalStations)
            {
                currentStation=1;
            }
        }
        if(command==-1)
        {
            currentStation--;
            if(currentStation<1)
            {
                currentStation=totalStations;
            }
        }
        if(currentStation==targetStation)
        {
            moments++;
        }
    }
    printf("%d",moments);
    return 0;
}