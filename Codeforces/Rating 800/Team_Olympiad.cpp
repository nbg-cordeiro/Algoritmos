// enunciado:
// https://codeforces.com/problemset/problem/490/A

#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;


void solve() {
    int n;
    cin >> n;
    
    vector<stack<int>> s(4);

    for(int i=1; i<=n; i++){
        int subject;
        cin >> subject;
        s[subject].push(i);
    }

    int teams = min({s[1].size(), s[2].size(), s[3].size()});

    cout << teams << '\n';
    for(int i=0; i<teams; i++){
        cout << s[1].top() << ' ' << s[2].top() << ' ' << s[3].top() << '\n';
        for(int j=1; j<=3; j++)
            s[j].pop();
    }
    

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