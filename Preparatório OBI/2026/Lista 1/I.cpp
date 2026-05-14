#include <iostream>

using namespace std;

int main (){
    int comprimento, largura, area1, area2;

    cin >> comprimento >> largura;
    area1 = comprimento*largura;
    
    cin >> comprimento >> largura;
    area2 = comprimento*largura;

    if(area1>area2)
        cout << area1 << endl;
    else
        cout << area2 << endl;

    return 0;
}