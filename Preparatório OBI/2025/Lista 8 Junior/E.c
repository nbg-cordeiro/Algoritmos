#include <stdio.h>

int main()
{
    int pontuacao[5]={0};
    for(int i=0;i<5;i++)
    {
        scanf("%d",&pontuacao[i]);
    }
    int max = pontuacao[0];
    int max2 = 0;
    for(int i=1;i<5;i++)
    {
        if(pontuacao[i]>max)
        {
            max2=max;
            max=pontuacao[i];
        }
        else if(pontuacao[i]>max2 && pontuacao[i]<max)
        {
            max2=pontuacao[i];
        }
    }
    int trofeus=0;
    int placas= 0;
    for(int i=0;i<5;i++)
    {
        if(pontuacao[i]==max)
        {
            trofeus++;
        }
        else if(pontuacao[i]==max2)
        {
            placas++;
        }
    }
    printf("%d %d\n", trofeus, placas);
    
    return 0;
}