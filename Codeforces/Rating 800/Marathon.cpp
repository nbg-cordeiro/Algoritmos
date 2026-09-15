// enunciado:
// https://codeforces.com/problemset/problem/1692/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;

    while(t--){
        int timur;
        cin >> timur;
        int ahead=0;
        for(int i=0; i<3; i++){
            int runner;
            cin >> runner;
            if(runner>timur){
                ahead++;
            }
        }
        cout << ahead << endl;
    }
    
    return 0;
}