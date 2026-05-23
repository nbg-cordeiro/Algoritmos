#include <stdio.h>

int main ()
{
    int currentSum, maxSum=-1;
    int n;
    scanf("%d\n", &n);
    int rowSum[n];
    int colSum[n];
    int matrix[n][n];

    for(int i=0;i<n;i++)
    {
        rowSum[i] = 0;
        colSum[i] = 0;
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &matrix[i][j]);
            colSum[j] += matrix[i][j];
            rowSum[i] += matrix[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            currentSum = (colSum[j] + rowSum[i]);
            currentSum -= (2*matrix[i][j]);
            if(currentSum > maxSum) 
            {
                maxSum = currentSum;
            }
        }
    }
    printf("%d\n", maxSum);
    return 0;
}