#include <stdio.h>

int main ()
{
    short weight[4];
    for(short i=0; i<4; i++)
    {
        scanf("%hd", &weight[i]);
    }
    if(weight[0]==weight[1]+weight[2]+weight[3])
    {
        if(weight[1]+weight[2]==weight[3])
        {
            if(weight[1]==weight[2])
            {
                printf("S");
                return 0;
            }
        }
    }
    printf("N");
    return 0;
}