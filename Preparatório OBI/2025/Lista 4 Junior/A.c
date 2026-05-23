#include <stdio.h>

int main ()
{
    short sideSize;
    scanf("%hd", &sideSize);
    short matrix[sideSize][sideSize];
    short coords[2];
    short lineSum[2]={0,0};
    for(short i=0;i<sideSize;i++)
    {
        for(short j=0;j<sideSize;j++)
        {
            scanf("%hd", &matrix[i][j]);
            if(matrix[i][j]==0)
            {
                coords[0] = i+1;
                coords[1] = j+1;
            }
            if(j<sideSize)
            {
                if(i==0 || i==1)
                {
                    lineSum[i] += matrix[i][j];
                }
            }
        }
    }
    if(lineSum[0]<lineSum[1])
    lineSum[0]=lineSum[1];
    lineSum[1]=0;
    for(int j=0; j<sideSize; j++)
    {
        lineSum[1] += matrix[coords[0]-1][j];
    }
    printf("%hd", lineSum[0]-lineSum[1]);
    printf("\n%hd\n%hd", coords[0], coords[1]);

    return 0;
}