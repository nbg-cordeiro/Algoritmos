// enunciado:
// https://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;
 
int main (){
    int size;
    cin >> size;
    if(size>2 && !(size&1))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}