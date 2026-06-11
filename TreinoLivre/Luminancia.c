// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1052

#include <stdio.h>

int main ()
{
    double visibilidade, max, min;
    scanf("%lf %lf", &visibilidade, &max);
    min = (double)max*(visibilidade-1);
    min /= (double)(1+visibilidade);
    if(min<0)
        min*=(double)-1;
    
    printf("%.8lf\n", min);

    return 0;
}