#include <stdio.h>

int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}
int main() 
{
    int N;
    scanf("%d", &N);
    for (int linha = 0; linha < N; linha++) 
    {
        for (int coluna = 0; coluna < N; coluna++) 
        {
            int distancia = min(min(linha, coluna),min(N-1-linha, N-1-coluna));
            int altura = distancia + 1;
            if (coluna > 0)
                printf(" ");
            printf("%d", altura);
        }
        printf("\n");
    }
    return 0;
}