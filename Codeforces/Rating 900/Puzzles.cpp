// enunciado:
// https://codeforces.com/problemset/problem/337/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int n, m;

    cin >> n >> m;

    vector<int> puzzles(m);

    for(int &p: puzzles){
        cin >> p;
    }

    sort(puzzles.begin(),puzzles.end());


    int minimum = 2000;
    for(int i=0 ;i<=m-n; i++){
        int difference = puzzles[i+n-1]-puzzles[i];
        if(difference<minimum){
            minimum=difference;
        }
    }

    cout << minimum << endl;

    return 0;
}