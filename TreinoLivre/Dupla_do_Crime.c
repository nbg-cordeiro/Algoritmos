// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.saet24-Ddupla

#include <stdio.h>

int main (){
    float alturaA, larguraA, alturaB, larguraB;
    scanf("%f %f %f", &alturaA, &larguraA, &alturaB);
    larguraB = (alturaB*larguraA)/alturaA;
    float areaA = alturaA*larguraA;
    float areaB = alturaB*larguraB;
    printf("%.2f %.2f %.2f\n", larguraB, areaA, areaB);
    return 0;
}