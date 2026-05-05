// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1077

#include <iostream>

using namespace std;

int main (){
    int total = 0;
    for(int i=0; i<4; i++){
        int num;
        cin >> num;
        total+=num;
    }
    cout << "Total de eleitores: "<< total << endl;
    return 0;
}