#include <stdio.h>

int main()
{
    short R, L, D;
    scanf("%hd %hd %hd", &L, &R, &D);
    if(R>50 && L<R && R>D)
    {
        printf("S");
    }
    else
    {
        printf("N");
    }
    return 0;
}