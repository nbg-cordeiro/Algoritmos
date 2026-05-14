#include <iostream>

using namespace std;

int main (){
    int doces, bolos, pontuacao;
    cin >> pontuacao >> doces >> bolos;
    
    pontuacao += (2*doces) + (3*bolos);

    if(pontuacao >= 150)
        cout << "B" << endl;
    else if(pontuacao >= 120)
        cout << "D" << endl;
    else if(pontuacao >= 100)
        cout << "P" << endl;
    else
        cout << "N" << endl;
    
    return 0;
}