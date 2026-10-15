// enunciado:
// https://codeforces.com/problemset/problem/472/A

#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;


bool composite(int n){
    if(n<=2)
        return false;
    if(!(n&1))
        return true;
    for(int i=3; (i*i)<=n; i+=2){
        if(!(n%i))
            return true;
    }
    return false;
}

void solve() {
    int n;
    cin >> n;

    for(int i=(n/2); i>1; i--){
        if(composite(i) && composite(n-i)){
            cout << i << ' ' << n-i << '\n';
            return;
        }
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