#include <iostream>

using namespace std;

int main (){
    int esquerda, direita;
    cin >> esquerda >> direita;

    if(esquerda>direita)
        cout << esquerda+direita << endl;
    else
        cout << 2*(direita-esquerda) << endl;

    return 0;
}