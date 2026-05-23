#include <stdio.h>

int main ()
{
    short album[101]={0};
    short totalLeft;
    scanf("%hd",&totalLeft);
    short n;
    scanf("%hd", &n);
    for(short i=0;i<n;i++)
    {
        short x;
        scanf("%hd", &x);
        if(album[x]==0)
        {
            totalLeft--;
        }
        album[x]++;
    }
    printf("%hd", totalLeft);
    return 0;
}