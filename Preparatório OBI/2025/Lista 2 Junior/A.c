#include <stdio.h>

int main ()
{
    short boxSize[3];
    short windowSize[2];
    scanf("%hd\n%hd\n%hd", &boxSize[0], &boxSize[1], &boxSize[2]);
    scanf("%hd\n%hd", &windowSize[0], &windowSize[1]);
    for(short i=0; i<3; i++)
    {
        if(windowSize[0]>=boxSize[i])
        {
            for(short j=0; j<3; j++)
            {
                if(j==i)
                {continue;}
                else
                if(windowSize[1]>=boxSize[j])
                {
                    printf("S");
                    return 0;
                }
            }
        }
    }
    printf("N");
    return 0;
}