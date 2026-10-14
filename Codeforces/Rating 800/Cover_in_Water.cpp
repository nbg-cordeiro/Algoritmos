// enunciado:
// https://codeforces.com/problemset/problem/1900/A

#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;


void solve() {
    int n;
    cin >> n;
    
    string line;
    cin >> line;
    int longest = 0, current = 0, empty=0;
    for(int i = 0; i<n && longest<3; i++){
        if(line[i]=='.'){
            current++;
            empty++;
        }
        if(current > longest)
            longest = current;
        if(line[i]=='#')
            current = 0;
    }
    if(longest>=3)
        cout << 2 << '\n';
    else
        cout << empty << '\n';
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