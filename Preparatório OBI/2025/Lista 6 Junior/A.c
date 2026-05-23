#include <stdio.h>
#define A 1
#define B 2
#define C 3
void trocar(short *a, short *b) 
{
    short temp = *a;
    *a = *b;
    *b = temp;
}
int main ()
{
    short num[3]={0,0,0};
    char start;
    short n;
    scanf("%hd",&n);
    scanf(" %c",&start);
    num[start-'A']=1;
    
    short scanned;
    for(short i=0;i<n;i++)
    {
        scanf("%hd",&scanned);
        switch (scanned)
        {
        case 1:
            trocar(&num[0], &num[1]);
            break;
        case 2:
            trocar(&num[1], &num[2]);
            break;
        case 3:
            trocar(&num[0], &num[2]);
            break;
        }
    }
    for(short i=0;i<3;i++)
    {
        if(num[i]==1)
        {
            printf("%c",i+'A');
            break;
        }
    }
    return 0;
}
