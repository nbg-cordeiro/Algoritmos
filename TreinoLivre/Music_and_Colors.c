// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1027

#include <stdio.h>

int main ()
{
    int n, m;
    long long total;
    scanf("%d %d", &n,&m);
    total=m;
    m--;
    n--;
    for(int i=0; i < n; i++)
        total*=m;
    
    printf("%lld", total);

    return 0;
}