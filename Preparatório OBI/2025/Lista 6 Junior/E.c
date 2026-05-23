#include <stdio.h>

int main()
{
    int totalStates;
    scanf("%d",&totalStates);
    char states[totalStates][2];
    int result[totalStates];
    float priceGas,priceAl;
    int totalResult=0;
    for (int i = 0; i < totalStates; i++)
    {
        result[i]=0;
        scanf(" %c%c %f %f", &states[i][0], &states[i][1], &priceAl, &priceGas);
        priceGas*=(float)(0.7);
        if(priceAl <= priceGas)
        {
            result[i] = 1;
        }
    }
    for(int i=0; i<totalStates; i++)
    {
        if(result[i]==1)
        {
            printf("%c%c\n",states[i][0],states[i][1]);
            totalResult++;
        }
    }
    if(totalResult==0)
    {
        printf("*\n");
    }
    return 0;
}