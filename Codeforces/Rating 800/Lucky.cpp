// enunciado:
// https://codeforces.com/problemset/problem/1676/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        int sum=0;

        for(int i=0; i<3; i++){
            sum+=num%10;
            num/=10;
        }
        for(int i=0; i<3; i++){
            sum-=num%10;
            num/=10;
        }
        if(!sum){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}