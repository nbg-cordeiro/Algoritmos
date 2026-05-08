// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2013f2pj_volume

#include <iostream>

using namespace std;

int main (){
    int volume, operacoes;
    cin >> volume >> operacoes;

    while(operacoes--){
        int mudanca;
        cin >> mudanca;
        volume+=(mudanca);
        if(volume>100)
            volume=100;
        if(volume<0)
            volume=0;
    }

    cout << volume << endl;
    return 0;
}