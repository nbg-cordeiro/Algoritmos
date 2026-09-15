// enunciado:
// https://codeforces.com/problemset/problem/1901/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;
        
        int before=0, max=0;

        for(int i=0; i<n; i++){
            int num;
            cin >> num;
            if((num-before)>max){
                max=(num-before);
            }
            before = num;
        }
        if((2*(x-before))>max){
            max = (2*(x-before));
        }

        cout << max << endl;
    }

    return 0;
}