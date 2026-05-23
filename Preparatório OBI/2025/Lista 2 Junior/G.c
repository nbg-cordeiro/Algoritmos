#include <stdio.h>

int main ()
{
    int capacity,factor,days=0,quantity=1;
    scanf("%d\n%d", &capacity  , &factor);
    while(quantity<=capacity)
    {
        quantity*=factor;
        days++;
    }
    printf("%d",days-1);
    return 0;
}