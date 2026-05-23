#include <stdio.h>

int N;
int camiseta[105][105];
int visitado[105][105];

int di[4] = {-1, 0, 1, 0};
int dj[4] = {0, 1, 0, -1};

void passarBolinha(int i, int j) 
{
    visitado[i][j] = 1;
    for (int k = 0; k < 4; k++) 
    {
        int ni = i + di[k];
        int nj = j + dj[k];
        
        if (ni >= 0 && ni < N && nj >= 0 && nj < N) 
        {
            if (camiseta[ni][nj] >= camiseta[i][j] && !visitado[ni][nj]) 
            {
                passarBolinha(ni, nj);
            }
        }
    }
}

int main() 
{
    int I, J;
    scanf("%d", &N);
    scanf("%d %d", &I, &J);
    I--; J--;
    
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            scanf("%d", &camiseta[i][j]);
            visitado[i][j] = 0;
        }
    }
    passarBolinha(I, J);
    int resultado = 0;
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if (visitado[i][j]) resultado++;
        }
    }
    
    printf("%d\n", resultado);
    return 0;
}