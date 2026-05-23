#include <stdio.h>

int main ()
{
    short n;
    scanf("%hd",&n);
    short phrase[100]={0};
    short m=n-1;
    for(short i=0;i<n;i++)
    {
        scanf("%hd",&phrase[i]);
    }
    for(short i=0;i<n;i++)
    {
        for(short j=0;j<m;j++)
        {
            if(phrase[j]==phrase[j+1])
            {
                phrase[j]=1;
            }
            else
            {
                phrase[j]=-1;
            }
        }
        m--;
    }
    if(phrase[0]==-1)
    {
        printf("branca\n");
        return 0;
    }
    printf("preta\n");
    return 0;
}