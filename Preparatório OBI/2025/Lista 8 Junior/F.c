#include <stdio.h>

int main ()
{
    int n;
    scanf("%d",&n);
    int index[n];
    int num;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        index[num-1]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",index[i]);
    }
    return 0;
}









