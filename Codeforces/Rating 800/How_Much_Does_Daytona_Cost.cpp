// enunciado:
// https://codeforces.com/problemset/problem/1878/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        
        bool found = false;
        while(n--){
            int num;
            cin >> num;
            if(num==k){
                found=true;
            }
        }
        if(found){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}