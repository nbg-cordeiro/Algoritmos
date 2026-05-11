// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.trilhas

#include <stdio.h>

int main (){
    int trilhas;
    scanf("%d", &trilhas);
    int menorCodigo, menorSubida;

    for(int k=1; k<=trilhas; k++){
        int qtdParadas;
        scanf("%d", &qtdParadas);

        int soma1=0, soma2=0;
        int atual, anterior;
        for(int i=0; i<qtdParadas; i++){
            scanf("%d", &atual);
            if(!i)
                anterior=atual;
            else if(atual>anterior)
                soma1+=(atual-anterior);
            else if(atual<anterior)
                soma2+=(anterior-atual);
            anterior = atual;
        }

        int menorSoma=soma1;
        if(soma2<menorSoma)
            menorSoma=soma2;

        if(k==1){
            menorCodigo=k;
            menorSubida=menorSoma;
        }else if(menorSoma<menorSubida){
            menorSubida=menorSoma;
            menorCodigo=k;
        }
    }

    printf("%d\n", menorCodigo);

    return 0;
}