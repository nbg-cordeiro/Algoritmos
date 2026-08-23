// enunciado:
// https://codeforces.com/problemset/problem/580/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;

    int current=0, max=0, before=0;
    while(n--){
        int num;
        cin >> num;
        if(num>=before){
            current++;
        }
        if(current>max){
            max=current;
        }
        if(before>num){
            current=1;
        }
        before=num;
    }

    cout << max << endl;

    return 0;
}