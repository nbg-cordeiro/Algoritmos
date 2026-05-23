#include <stdio.h>

int main()
{
    short num[3];
    scanf("%hd %hd %hd", &num[0], &num[1], &num[2]);
    if(num[0]<num[1])
    {
        printf("RM\n");
    }
    else
    {
        printf("*\n");
    }
    if(num[0]<num[2])
    {
        printf("RO\n");
    }
    else
    {
        printf("*\n");
    }

    return 0;
}