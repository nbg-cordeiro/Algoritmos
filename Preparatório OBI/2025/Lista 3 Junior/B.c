#include <stdio.h>

int main()
{
    short N, K, x, freq[101] = {0};
    scanf("%hd %hd", &N, &K);
    for (short i = 0; i < N; i++) 
    { 
        scanf("%hd", &x); 
        freq[x]++;
    }
    short acumulado = 0;
    for (short nota = 100; nota >= 1; nota--)
    {
        acumulado += freq[nota];
        if (acumulado >= K) 
        {
            printf("%hd\n", nota);
            return 0;
        }
    }
    return 0;
}




