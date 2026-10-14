// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2022f2pj_piramide

#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int matriz [n][n];
    
    for(int i=0, m=n-1; i<=m; i++,m--)
    {
        int num = 0;
        for(int j=0, k=n-1; j<=k ; j++,k--)
        {
            if(num<=i)
                num++;
            matriz[i][j]=num;
            matriz[i][k]=num;
            matriz[m][j]=num;
            matriz[m][k]=num;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d", matriz[i][j]);
            if(j+1<n)
                printf(" ");
        }
        if(i+1<n)
            printf("\n");
    }

    return 0;
}