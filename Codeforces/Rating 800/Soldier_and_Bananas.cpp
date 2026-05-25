// enunciado:
// https://codeforces.com/problemset/problem/546/A

#include <iostream>
using namespace std;

int main(){
    int price, money, qtWanted;
    cin >> price >> money >> qtWanted;
    int totalBananas=0, totalMoney=0;
    for(int i=1; i<=qtWanted; i++){
        totalBananas++;
        totalMoney+=(price*i);
    }
    int borrowed = totalMoney - money;
    if(borrowed<0)
        borrowed=0;
    cout << borrowed;
    return 0;
}