// enunciado:
// https://codeforces.com/problemset/problem/1703/B

#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;


void solve() {
    int n;
    cin >> n;

    string line;
    cin >> line;

    int total = 0;
    bool solved[26] = {0};

    for(int i=0; i<n; i++){
        if(not solved[line[i]-'A'])
            total++;
        solved[line[i]-'A']=true;
        total++;
    }

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