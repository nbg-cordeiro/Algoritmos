// enunciado:
// https://codeforces.com/problemset/problem/9/A

#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;


void solve() {
    int a,b;
    cin >> a >> b;

    int num = 7-max(a,b);
    int mdc = gcd(num,6);

    cout << num/mdc << '/' << 6/mdc << '\n';
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