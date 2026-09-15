// enunciado:
// codeforces.com/problemset/problem/1903/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> numbers(n);
        for(int &i: numbers){
            cin >> i;
        }
        if(k!=1){
            cout << "YES\n";
            continue;
        }
        bool sorted = true;
        for(int i=1; i<n; i++){
            if(numbers[i-1]>numbers[i]){
                sorted=false;
                break;
            }
        }
        if(sorted){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}