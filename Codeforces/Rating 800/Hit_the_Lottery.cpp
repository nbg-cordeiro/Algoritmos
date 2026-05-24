// enunciado:
// https://codeforces.com/problemset/problem/996/A

#include <iostream>
using namespace std;

int main(){
    int money;
    cin>> money;
    int total=0;
    if(money>=100){
        total+=(money/100);
        money%=100;
    }
    if(money>=20){
        total+=(money/20);
        money%=20;
    }
    if(money>=10){
        total+=(money/10);
        money%=10;
    }
    if(money>=5){
        total+=(money/5);
        money%=5;
    }
    total+=money;
    cout << total << endl;

    return 0;
}