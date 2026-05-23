#include <stdio.h>

int main ()
{
    short p1, p2, c1, c2;
    scanf("%hd %hd %hd %hd", &p1, &c1, &p2, &c2);
    if((p1*c1==p2*c2))
    {
        printf("0");
    }
    else
    if(p1*c1>p2*c2)
    {
        printf("-1");
    }
    else
    {
        printf("1");
    }
    return 0;
}