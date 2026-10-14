// enunciado:
// https://codeforces.com/problemset/problem/1985/A

#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;


void solve() {
    string a, b;
    cin >> a >> b;
    swap(a[0],b[0]);
    cout << a << ' ' << b << '\n';
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