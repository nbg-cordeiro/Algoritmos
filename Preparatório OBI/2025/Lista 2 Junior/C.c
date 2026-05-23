#include <stdio.h>

int main ()
{
    short Ax,Ay,Bx,By;
    scanf("%hd%hd%hd%hd",&Ax,&Ay,&Bx,&By);
    if(Ax*Ay>Bx*By)
    {
        printf("%hd",Ax*Ay);
    }
    else
    {
        printf("%hd",Bx*By);
    }
    return 0;
}