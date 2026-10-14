// enunciado:
// https://codeforces.com/problemset/problem/1560/A

#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;


void solve() {
    int n;
    cin >> n;
    
    int k = 0;
    int num = 0;
    while(k<n){
        num++;
        if((!(num%3)) || (num%10 == 3))
            continue;
        
        k++;
    }

    cout << num << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--){ solve(); }
    // solve();

    return 0;
}