// enunciado:
// https://codeforces.com/problemset/problem/1669/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    while(n--){
        int rating, division=4;
        cin >> rating;
        if(rating>=1900){
            division--;
        }
        if(rating>=1600){
            division--;
        }
        if(rating>=1400){
            division--;
        }
        cout << "Division " << division << endl;
    }
    return 0;
}