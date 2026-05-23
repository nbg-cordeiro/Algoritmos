#include <stdio.h>

int main()
{
    long long A, B;
    scanf("%lld %lld", &A, &B);
    
    long long c1 = 2*A - B;
    long long c2 = 2*B - A;
    long long ans;
    if (c1 <= A) ans = c1;
    else ans = c2;
    printf("%lld\n", ans);
    return 0;
}