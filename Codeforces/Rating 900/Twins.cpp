// enunciado:
// https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    
    vector<int> coins(n);

    int sum=0;
    for(int &c : coins){
        cin >> c;
        sum+=c;
    }

    sort(coins.begin(), coins.end());

    int mySum=0, minimumCoins=0;
    for(int i=n-1; i>=0; i--){
        mySum+=coins[i];
        sum-=coins[i];
        minimumCoins++;
        if(mySum>sum){
            cout << minimumCoins << endl;
            return 0;
        }
    }

    return 0;
}
