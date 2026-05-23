#include <stdio.h>

int main ()
{
    short m,a;
    scanf("%hd %hd", &a, &m);
    short result= (2*m) - a;
    printf("%hd\n", result);
}