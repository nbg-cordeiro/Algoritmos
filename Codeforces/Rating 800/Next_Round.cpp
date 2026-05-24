// enunciado:
// https://codeforces.com/problemset/problem/158/A

#include <iostream>
using namespace std;

int main (){
    int players, minimium;

    cin >> players >> minimium;
    int scores[players];

    for(int i=0; i<players; i++)
        cin >> scores[i];
    int total = players;
    
    for(int i=0; i<players; i++){
        if(scores[i]<scores[minimium-1] || scores[i] == 0)
            total--;
    }
    cout << total << endl;
    return 0;
}