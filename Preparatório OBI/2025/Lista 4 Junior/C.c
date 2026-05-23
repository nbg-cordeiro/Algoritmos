#include <stdio.h>

int main ()
{
    short n;
    scanf("%hd", &n);
    short sequence[n];
    short longest = 0;
    for(short i=0; i<n; i++)
    {
        scanf("%hd", &sequence[i]);
    }
    for(short i=0; i<n; i++)
    {
        if(sequence[i]!=sequence[i+1])
        {
            longest+=1;
        }
    }
    printf("%hd\n", longest);
}