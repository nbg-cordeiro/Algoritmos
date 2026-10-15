// enunciado:
// https://codeforces.com/problemset/problem/432/A

#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;


void solve() {
    int n, k;
    cin >> n >> k;

    int total = 0;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        if(num+k <= 5)
            total++;
    }

    cout << total/3 << '\n';    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int t;
    // cin >> t;
    // while (t--){ solve(); }
    solve();

    return 0;
}