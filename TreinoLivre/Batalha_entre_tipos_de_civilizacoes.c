// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.batalha-civilizacoes_funcao

#include <stdio.h>

#define Terra 1
#define Fogo 2
#define Agua 3

double fogo(int nivel){
    switch(nivel){
        case 1: return 2.0;
        case 2: return 3.0;
        case 3: return 5.0;
        default: return 0.0;
    }
}

double agua(int nivel){
    switch(nivel){
        case 1: return 1.0;
        case 2: return 2.5;
        case 3: return 4.0;
        default: return 0.0;
    }
}
double terra(int nivel){
    switch(nivel){
        case 1: return 2.5;
        case 2: return 5.5;
        case 3: return 7.0;
        default: return 0.0;
    }
}

double calculaVantagem(int tipoPlayer, int tipoCPU){
    if(tipoPlayer==tipoCPU)
        return 1.0;
    if(tipoPlayer == Terra && tipoCPU == Agua)
        return 2.0;
    if(tipoPlayer == Fogo && tipoCPU == Terra)
        return 2.0;
    if(tipoPlayer == Agua && tipoCPU == Fogo)
        return 2.0;
    return 0.5;
}

double calculaDano(int tipoPlayer, int nivelPlayer, int tipoCPU, double defesaCPU){
    double dano = 100.0;
    switch (tipoPlayer){
    case Terra:
        dano*=terra(nivelPlayer);break;
    case Fogo:
        dano*=fogo(nivelPlayer);break;
    case Agua:
        dano*=agua(nivelPlayer);break;
    }
    dano *= calculaVantagem(tipoPlayer,tipoCPU);
    dano -= defesaCPU;
    if(dano<0)
        dano=0.0;
    return dano;
}