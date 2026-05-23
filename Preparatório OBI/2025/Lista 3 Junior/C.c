#include <stdio.h>

int main ()
{
    short n;
    scanf("%hd", &n);
    short estoque[n];
    for (short i = 0; i < n; i++) {
        scanf("%hd", &estoque[i]);
    }
    short vendidos=0;
    short item;
    scanf("%hd", &n);
    for(short i=0;i<n;i++){
        scanf("%hd", &item);
        if(estoque[item-1])
        {
            vendidos++;
            estoque[item-1]--;
        }
    }
    printf("%hd\n", vendidos);
    return 0;
}