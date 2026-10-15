// enunciado:
// https://codeforces.com/problemset/problem/1367/A

#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;


void solve() {
    string line;
    cin >> line;

    int size = line.length();

    cout << line[0] << line[1];
    for(int i=3; i<size; i+=2)
        cout << line[i];
    
    cout << '\n';
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