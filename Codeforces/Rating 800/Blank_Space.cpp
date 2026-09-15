// enunciado:
// https://codeforces.com/problemset/problem/1829/B

#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int current=0, longest=0;
        while(n--){
            int num;
            cin >> num;
            if(!num){
                current++;
                if(current>longest){
                    longest=current;
                }
            }else{
                current=0;
            }
        }
        cout << longest << endl;
    }

    return 0;
}