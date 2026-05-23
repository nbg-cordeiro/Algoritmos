#include <stdio.h>

int main ()
{
    short coins;
    short n;
    scanf("%hd", &coins);
    scanf("%hd",&n);
    short captainTotal=coins/(n+2);
    captainTotal*=2;
    printf("%hd\n", captainTotal);
    return 0;
}