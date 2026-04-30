#include <iostream>

using namespace std;

int main (){
    int posicoes, alvo, posicaoInicial;
    cin >> posicoes >> alvo >> posicaoInicial;

    if (alvo >= posicaoInicial){
        cout << alvo - posicaoInicial << endl;
        return 0;
    }
    cout << (posicoes-posicaoInicial)+alvo << endl;

    return 0;
}