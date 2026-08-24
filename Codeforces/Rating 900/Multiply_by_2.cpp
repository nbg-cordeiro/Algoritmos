// enunciado:
// https://codeforces.com/problemset/problem/1374/B

#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;

    while(n--){
        int num;
        cin >> num;
        
        int total = 0;
        while(num>1){
            if(num%6){
                num<<=1;
                if(num%6){
                    total=-1;
                    break;
                }
                total++;
            }else{
                num/=6;
                total++;
            }
        }
        cout << total << endl;
    }

    return 0;
}