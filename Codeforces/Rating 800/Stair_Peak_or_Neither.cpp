// enunciado:
// https://codeforces.com/problemset/problem/1950/A

#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;


void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a<b && b<c)
        cout << "STAIR\n";
    else if(a<b && b>c)
        cout << "PEAK\n";
    else
        cout << "NONE\n";
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