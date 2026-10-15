// enunciado:
// 

#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
using adj = vector<vector<int>>;
void yes(){cout<<"YES\n";}
void no(){cout<<"NO\n";}
bool isSubStrOf(string,string);
bool isPrime(int);

void solve() {
    int n, m;
    cin >> n >> m;

    string xn, sm;
    cin >> xn >> sm;

    int necessary = 0;
    while(xn.length()<sm.length()){
        xn+=xn;
        necessary++;
    }

    bool possible = false;
    for(int i=0; i<6; i++){
        if(isSubStrOf(sm,xn)){
            possible = true;
            break;
        }
        xn+=xn;
        necessary++;
    }
    
    if(possible)
        cout << necessary << '\n';
    else
        cout << -1 << '\n';
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

bool isSubStrOf(string a,string b){
    return (b.find(a) != string::npos);
}