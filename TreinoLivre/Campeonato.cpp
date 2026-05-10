// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2012f1pj_campeonato

#include <iostream>

using namespace std;

int main (){
    int pointsCor=0, goalsCor, pointsFla=0, goalsFla;
    
    int leitura;
    cin >> leitura;
    pointsCor+=(3*leitura);
    cin >> leitura;
    pointsCor+=(leitura);
    cin >> goalsCor;

    cin >> leitura;
    pointsFla+=(3*leitura);
    cin >> leitura;
    pointsFla+=(leitura);
    cin >> goalsFla;

    if(pointsCor==pointsFla){
        if(goalsCor==goalsFla){
            cout << "=" << endl;
            return 0;
        }
        if(goalsCor>goalsFla){
            cout << "C" << endl;
            return 0;
        }
        cout << "F" << endl;
        return 0;
    }
    if(pointsCor>pointsFla){
        cout << "C" << endl;
        return 0;
    }
    cout << "F" << endl;
    return 0;
}