// enunciado:
// https://codeforces.com/problemset/problem/318/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    long long n, k;
    cin >> n >> k;
    
    long long totalOdd=n/2;
    if(n&1){
        totalOdd++;
    }

    if(k<=totalOdd){
        cout << ((k*2)-1) << endl;
        return 0;
    }
    k-=totalOdd;
    cout << (k*2) << endl;

    return 0;
}