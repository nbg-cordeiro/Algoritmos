#include <stdio.h>

int main ()
{
    short evenPlayer,num1,num2;
    scanf("%hd\n%hd\n%hd", &evenPlayer, &num1, &num2);
    if((num1+num2)%2==0)
    {
        printf("%hd",evenPlayer);
    }
    else
    if(evenPlayer)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    return 0;
}