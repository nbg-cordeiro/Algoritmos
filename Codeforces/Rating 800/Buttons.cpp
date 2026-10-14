// enunciado:
// https://codeforces.com/problemset/problem/1858/A

#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;


void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    a+=(c&1);

    if(a>b)
        cout << "First\n";
    else
        cout << "Second\n";
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