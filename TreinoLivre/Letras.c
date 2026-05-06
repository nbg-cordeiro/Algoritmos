// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2014f1p1_letra

#include <stdio.h>

int main (){
    int totalPalavras=0;
    int validas=0;
    char palavra[1001];
    char alvo;
    scanf("%c", &alvo);
    while(scanf("%s", palavra)!=EOF){
        int contem = 0;
        for(int i=0; palavra[i]!='\0'; i++){
            if(palavra[i]==alvo){
                contem=1;
                break;
            }
        }
        totalPalavras++;
        validas+=contem;
    }

    printf("%.1f\n", 100.0 * validas / totalPalavras);
}