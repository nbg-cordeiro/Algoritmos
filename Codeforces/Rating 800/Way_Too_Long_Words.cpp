// enunciado:
// https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>
using namespace std;

int main (){
    int total;
    string atual;
    cin >> total;
    while(total--){
        cin >> atual;
        if(atual.size()>10)
            cout << atual[0] << atual.size()-2 << atual[atual.size()-1] << endl;
        else
            cout << atual << endl;
    }
    return 0;
}