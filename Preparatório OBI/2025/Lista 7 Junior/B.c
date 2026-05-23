#include <stdio.h>

int main ()
{
    char horizontal[1001]={0};
    char vertical [1001]={0};
    int farHorIndex=-1;
    int farVerIndex=-1;
    scanf("%s %s", horizontal, vertical);

    for (int i = 0; horizontal[i]; i++)
    {
        for(int j=0; vertical[j]; j++)
        {
            if(vertical[j]==horizontal[i])
            {
                farHorIndex=i;
            }
        }
    }
    for(int i=0; vertical[i];i++)
    {
        if(vertical[i]==horizontal[farHorIndex])
        {
            farVerIndex=i;
        }
    }
    if(farVerIndex!=-1 && farHorIndex!=-1)
    {
        farHorIndex++;
        farVerIndex++;
    }
    printf("%d %d\n", farHorIndex, farVerIndex);

    return 0;
}