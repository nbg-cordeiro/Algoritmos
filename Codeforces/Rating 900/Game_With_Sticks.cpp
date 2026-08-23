// enunciado:
// https://codeforces.com/problemset/problem/451/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    unsigned int n, m;

    cin >> n >> m;

    if(min(n,m)&1){
        cout << "Akshat\n";
    }else{
        cout << "Malvika\n";
    }
    
    return 0;
}