// enunciado:
// https://codeforces.com/problemset/problem/1873/A

#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;


void solve() {
    string line;
    cin >> line;
    int is[3];
    for(int i=0; i<=3; i++)
        is[line[i]-'a'] = i;
    
    if(is[0]!=0)
        swap(line[0], line[is[0]]);
    else if (is[1]!=1)
        swap(line[1], line[is[1]]);
    
    if(line=="abc")
        cout << "YES\n";
    else
        cout << "NO\n";
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