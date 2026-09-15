// enunciado?
// https://codeforces.com/problemset/problem/1999/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;

    while(t--){
        int num;
        cin >> num;
        int sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        cout << sum << endl;
    }

    return 0;
}