// enunciado:
// https://codeforces.com/problemset/problem/1475/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;

    while(n--){
        unsigned long long num;
        cin >> num;
        
        bool hasOdd = false;
        while(num>1){
            if(num&1){
                cout<< "YES\n";
                hasOdd = true;
                break;
            }
            num>>=1;
        }
        if(!hasOdd){
            cout << "NO\n";
        }
    }


}