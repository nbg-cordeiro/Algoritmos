// enunciado:
// https://codeforces.com/problemset/problem/486/A

#include <iostream>
using namespace std;

int main(){
    long long n, total=0;
    cin >> n;
    if(n&1)
        total=(-1)*((n/2)+1);
    else
        total=(n/2);
    cout << total << endl;
    return 0;
}