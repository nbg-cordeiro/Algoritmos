#include <iostream>

using namespace std;

int main (){
    int refeicoes, calorias;
    cin >> refeicoes >> calorias;

    for(int i=0; i<refeicoes; i++){
        int proteinas, gorduras, carboidratos;
        cin >> proteinas >> gorduras >> carboidratos;
        calorias -= (proteinas + carboidratos) * 4;
        calorias -= gorduras * 9;
    }
    if(calorias<0)
        calorias = 0;
    cout << calorias << endl;
    return 0;
}