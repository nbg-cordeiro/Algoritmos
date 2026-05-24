// enunciado:
// https://codeforces.com/problemset/problem/282/A

#include <iostream>
using namespace std;

int main (){
    int x = 0, cases;
    cin >> cases;
    char characters[4];
    while(cases--){
        cin >> characters;
        if(characters[1]=='+')
            x++;
        else
            x--;
    }
    cout << x << endl;
    return 0;
}