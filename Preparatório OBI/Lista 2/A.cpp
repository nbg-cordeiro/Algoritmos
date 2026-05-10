#include <iostream>

using namespace std;

int main (){
    int infectadas, fatorInfec, alvo;
    cin >> infectadas >> fatorInfec >> alvo;
    int total = infectadas;
    int dias = 0;
    while(total<alvo){
        infectadas*=fatorInfec;
        total+=infectadas;
        dias++;
    }
    cout << dias << '\n';
    return 0;
}