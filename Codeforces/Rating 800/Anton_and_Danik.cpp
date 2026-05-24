// enunciado:
// https://codeforces.com/problemset/problem/734/A

#include <iostream>
using namespace std;

int main(){
    string wins;
    int games, anton=0;
    cin >> games >> wins;
    for(int i=0; i<games; i++){
        if(wins[i]=='A')
            anton++;
    }
    if(anton>(games-anton))
        cout << "Anton" << endl;
    else if(anton<(games-anton))
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}