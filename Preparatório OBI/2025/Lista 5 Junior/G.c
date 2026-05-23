#include <stdio.h>

int main ()
{
    short num[3];
    scanf("%hd %hd %hd", &num[0], &num[1], &num[2]);
    if(num[0]==num[1])
    {
        printf("%hd",num[2]);
    }
    else if(num[0]==num[2])
    {
        printf("%hd",num[1]);
    }
    else
    {
        printf("%hd",num[0]);
    }
    return 0;
}