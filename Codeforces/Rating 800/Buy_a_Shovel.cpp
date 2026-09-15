// enunciado:
// https://codeforces.com/problemset/problem/732/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int price, burle;
    cin >> price >> burle;
    int i=1;
    while(((price*i)-burle)%10 && (price*i)%10){
        i++;
    }
    cout << i << endl;
    return 0;
}