#include <stdio.h>

int main ()
{
    int n;
    int variavel1 = 0, variavel2 = 0, variavel3 = 0;
    scanf("%d", &n);
    int matrix[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            
            if((matrix[i-1][j-1]+matrix[i][j-1]+matrix[i-1][j]) < 2)
            {
                matrix[i][j] = 1;
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }
    printf("%d\n", matrix[n-1][n-1]);
    return 0;
}