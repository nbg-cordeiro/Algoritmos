// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2016f2pj_fuga

#include <iostream>

using namespace std;

int main(){
    int helicoptero, policial, fugitivo, direcao;
    cin >> helicoptero >> policial >> fugitivo >> direcao;

    while(1){
        fugitivo+=direcao;
        
        if(fugitivo>15)
            fugitivo = 0;
        if(fugitivo<0)
            fugitivo = 15;
        
        if(fugitivo==helicoptero){
            cout << "S" << endl;
            return 0;
        }
        if(fugitivo==policial){
            cout << "N" << endl;
            return 0;
        }
    }
    return 0;
}