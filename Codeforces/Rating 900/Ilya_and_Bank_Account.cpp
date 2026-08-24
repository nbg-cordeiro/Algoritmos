// enunciado:
// https://codeforces.com/problemset/problem/313/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int balance;
    cin >> balance;

    if(balance>0){
        cout << balance << endl;
        return 0;
    }

    int firstDigit = balance%(10);
    balance/=10;
    int secondDigit = balance%(10);
    balance-=secondDigit;

    if(firstDigit>secondDigit){
        balance+=firstDigit;
    }else{
        balance+=secondDigit;
    }

    cout << balance << endl;

    return 0;
}