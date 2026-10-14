// enunciado:
// https://codeforces.com/problemset/problem/1829/A

#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;

string goal = "codeforces";
void solve() {
    string line;
    cin >> line;
    
    int total = 0;
    for(int i=0; i<10; i++)
        total += line[i]!=goal[i];
    cout << total << '\n';
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