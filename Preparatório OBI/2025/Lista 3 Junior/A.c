#include <stdio.h>

int main ()
{
    short victories=0;
    char letter;
    for(short i=0;i<6;i++)
    {
        scanf(" %c",&letter);
        if(letter=='V')
        {
            victories++;
        }
    }
    switch (victories)
    {
    case 1:case 2:
        printf("3");
        break;
    case 3:case 4:
        printf("2");
        break;
    case 5:case 6:
        printf("1");
        break;
    default:
        printf("-1");
    }
    return 0;
}