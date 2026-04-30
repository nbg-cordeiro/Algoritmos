#include <iostream>

using namespace std;

int main (){
    int caixa1,caixa2,caixa3;
    cin >> caixa3 >> caixa2 >> caixa1;

    if(caixa1>caixa2 && caixa2>caixa3)
        cout << 1 << endl;
    else if(caixa1>(caixa2+caixa3))
        cout << 1 << endl;
    else if(caixa1>caixa2)
        cout << 2 << endl;
    else if(caixa2>caixa3)
        cout << 2 << endl;
    else
        cout << 3 << endl;

    return 0;
}