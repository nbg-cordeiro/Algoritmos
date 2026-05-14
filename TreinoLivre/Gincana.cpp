// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2016f2pj_gincana

#include <iostream>

using namespace std;


long long int mdc(long long int a, long long int b){
    while(b!=0){
        long long int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main (){
    long long int adversarios, maximo;
    cin >> adversarios >> maximo;

    while(mdc(adversarios, maximo)!=1){
        maximo--;
    }
    cout << maximo << endl;

    return 0;
}