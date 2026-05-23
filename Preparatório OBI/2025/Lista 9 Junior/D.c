#include <stdio.h>

int main() {
    char tabuleiro[7][8];
    int linha, coluna, movimentos = 0;

    for (linha = 0; linha < 7; linha++)
    {
        scanf("%s", tabuleiro[linha]);
    }
    for (linha = 0; linha < 7; linha++) 
    {
        for (coluna = 0; coluna < 7; coluna++) 
        {
            if (tabuleiro[linha][coluna] == 'o') 
            {
                if (linha > 1 && tabuleiro[linha-1][coluna] == 'o' && tabuleiro[linha-2][coluna] == '.')
                    movimentos++;
                if (linha < 5 && tabuleiro[linha+1][coluna] == 'o' && tabuleiro[linha+2][coluna] == '.')
                    movimentos++;
                if (coluna > 1 && tabuleiro[linha][coluna-1] == 'o' && tabuleiro[linha][coluna-2] == '.')
                    movimentos++;
                if (coluna < 5 && tabuleiro[linha][coluna+1] == 'o' && tabuleiro[linha][coluna+2] == '.')
                    movimentos++;
            }
        }
    }
    printf("%d\n", movimentos);
    return 0;
}
