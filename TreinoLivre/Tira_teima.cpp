// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2012f2pj_tenis

#include <iostream>

using namespace std;

int main (){
    int sideX, sideY;
    cin >> sideX >> sideY;
    
    if(sideX<0 || sideY<0 || sideX > 432 || sideY > 468)
        cout << "fora" << endl;
    else
        cout << "dentro" << endl;

    return 0;
}