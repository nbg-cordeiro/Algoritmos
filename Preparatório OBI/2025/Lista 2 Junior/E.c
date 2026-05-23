#include <stdio.h>

int main ()
{
    short port[2];
    scanf("%hd %hd", &port[0], &port[1]);
    if(port[0])
    {
        if(port[1])
        {
            printf("A");
            return 0;
        }
        else
        {
            printf("B");
            return 0;
        }
    }
    printf("C");
    return 0;
}