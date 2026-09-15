// enunciado:
// https://codeforces.com/problemset/problem/155/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;

    int max, min;
    cin >> max;
    min = max;
    n--;
    
    int amazing = 0;
    while(n--){
        int num;
        cin >> num;
        if(num>max){
            amazing++;
            max=num;
        }else if(num<min){
            amazing++;
            min=num;
        }
    }

    cout << amazing << endl;

    return 0;
}