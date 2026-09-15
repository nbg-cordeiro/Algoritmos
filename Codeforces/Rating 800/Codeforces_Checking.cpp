// enunciado:
// https://codeforces.com/problemset/problem/1791/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    getchar();

    string codeforces = "codeforces";
    while(t--){
        string line;
        getline(cin, line);
        if(codeforces.find(line) != line.npos){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}