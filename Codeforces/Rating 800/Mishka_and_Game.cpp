// enunciado:
// https://codeforces.com/problemset/problem/703/A


#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;
void yes(){cout<<"YES\n";}
void no(){cout<<"NO\n";}
bool isPrime(int n){
    if(n==2 || n==3)
        return true;
    if(n<=1 || !(n%2) || !(n%3))
        return false;
    for(int i=3; (i*i)<=n; i++){
        if(!(n%i))
            return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    int totalA=0, totalB=0;
    
    while(n--){
        int a, b;
        cin >> a >> b;
        if(a>b)
            totalA++;
        if(b>a)
            totalB++;
    }

    if(totalA>totalB)
        cout << "Mishka\n";
    else
    if(totalA<totalB)
        cout << "Chris\n";
    else
        cout << "Friendship is magic!^^\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--){ solve(); }

    return 0;
}