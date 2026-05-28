// enunciado:
// https://codeforces.com/problemset/problem/281/A

#include <iostream>
using namespace std;

int main (){
    char letter;
    cin >> letter;
    if(letter>='a'&&letter<='z')
        letter-=32;
    cout << letter;
    while(cin >> letter)
        cout << letter;
    cout << endl;
    return 0;
}