// enunciado:
// https://codeforces.com/problemset/problem/1873/C

#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;

void solve() {
    int total = 0;

    for(int i=0; i<10; i++){
        string line;
        cin >> line;

        for(int j=0; j<10; j++){
            if(line[j]=='X'){
                total += min({9-i,9-j, i, j})+1;
            }
        }
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