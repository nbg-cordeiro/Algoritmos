#include <iostream>

using namespace std;

int main (){
    int peso, braco, alavanca1, alavanca2;

    cin >> peso >> braco;
    alavanca1 = peso*braco;

    cin >> peso >> braco;
    alavanca2 = peso * braco;

    if(alavanca1 == alavanca2)
        cout << 0 << endl;
    else if(alavanca1 > alavanca2)
        cout << -1 << endl;
    else
        cout << 1 << endl;
    
    return 0;
}