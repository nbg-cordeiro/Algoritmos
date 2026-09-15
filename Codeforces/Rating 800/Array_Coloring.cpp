// enunciado:
// https://codeforces.com/problemset/problem/1857/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;

    while(t--){
        int odd=0;
        int n;
        cin >> n;
        while(n--){
            int num;
            cin >> num;
            if(num&1){
                odd++;
            }
        }
        if(odd&1){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }

    return 0;
}