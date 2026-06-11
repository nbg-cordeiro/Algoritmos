// enunciado:
// https://codeforces.com/problemset/problem/151/A

#include <iostream>

using namespace std;

int main (){
     int n, k, l, c, d, p, nl, np;
     cin >> n >> k >> l >> c >> d >> p >> nl >> np;
     int firstMin = min((k*l)/nl, c*d);
     cout << min(firstMin, p/np)/n;
     putchar('\n');

     return 0;
}