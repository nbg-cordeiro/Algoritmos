#include <stdio.h>
int nToThePowerOfp(int n, int p)
{
    int result = 1;
    for (int i = 0; i < p; i++)
    {
        result *= n;
    }
    return result;
}
int main()
{
    int totalNums;
    scanf("%d", &totalNums);
    int result=0;
    int n,p;
    for (int i = 0; i < totalNums; i++)
    {
        scanf("%d", &n);
        p=n%10;
        n=n/10;
        result += nToThePowerOfp(n, p);
    }
    printf("%d", result);
    return 0;
}