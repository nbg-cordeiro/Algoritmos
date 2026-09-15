// enunciado:
// https://codeforces.com/problemset/problem/581/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int a, b;
    cin >> a >> b;

    int minimum = min (a,b);
    cout << minimum << ' ' << ((max(a,b)-minimum)/2) << endl;

    return 0;
}