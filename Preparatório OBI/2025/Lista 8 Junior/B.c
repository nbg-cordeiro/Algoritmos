#include <stdio.h>

int main ()
{
    short numbers[100]={0};
    short num;
    short total=0;
    for(short i=0;i<6;i++)
    {
        scanf("%hd",&num);
        numbers[num]++;
    }
    for(short i=0;i<6;i++)
    {
        scanf("%hd",&num);
        if(numbers[num]!=0)
        {
            total++;
        }
    }
    switch (total)
    {
    case 6:
        printf("sena\n");
        break;
    case 5:
        printf("quina\n");
        break;
    case 4:
        printf("quadra\n");
        break;
    case 3:
        printf("terno\n");
        break;
    default:
        printf("azar\n");
        break;
    }
    return 0;
}