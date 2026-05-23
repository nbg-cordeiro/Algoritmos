#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int fila[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &fila[i]);
    }
    int m;
    scanf("%d", &m);
    int saiu[m];
    for (int i = 0; i < m; i++) 
    {
        scanf("%d", &saiu[i]);
    }
    int saiuFlag[100001] = {0};
    for (int i = 0; i < m; i++) 
    {
        saiuFlag[saiu[i]] = 1;
    }
    int printed = 0;
    for (int i = 0; i < n; i++) 
    {
        if (!saiuFlag[fila[i]]) 
        {
            if (printed) printf(" ");
            printf("%d", fila[i]);
            printed = 1;
        }
    }

    return 0;
}