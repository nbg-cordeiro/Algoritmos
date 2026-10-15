// enunciado:
// https://codeforces.com/problemset/problem/1722/A


#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;
void yes(){cout<<"YES\n";}
void no(){cout<<"NO\n";}
// bool isPrime(int n){
//     if(n==2 || n==3)
//         return true;
//     if(n<=1 || !(n%2) || !(n%3))
//         return false;
//     for(int i=3; (i*i)<=n; i++){
//         if(!(n%i))
//             return false;
//     }
//     return true;
// }

void solve() {
    int n;
    cin >> n;
    string name;
    cin >> name;

    if(n!=5){
        no();
        return;
    }
    
    sort(name.begin(),name.end());
    
    if(name=="Timru")
        yes();
    else
        no();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--){ solve(); }

    return 0;
}