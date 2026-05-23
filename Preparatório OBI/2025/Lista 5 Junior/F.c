#include <stdio.h>

int main()
{
    short time[3];
    short max=-1,min=20000;
    short maxIndex,minIndex;
    for(int i=0;i<3;i++)
    {
        scanf("%hd", &time[i]);
        if(time[i]>max)
        {
            max=time[i];
            maxIndex=i;
        }
        if(time[i]<min)
        {
            min=time[i];
            minIndex=i;
        }
    }
    printf("%hd\n",minIndex+1);
    for(int i=0;i<3;i++)
    {
        if (time[i]!=max && time[i]!=min)
        {
            printf("%hd\n",i+1);
            break;
        }
    } 
    printf("%hd",maxIndex+1);
}