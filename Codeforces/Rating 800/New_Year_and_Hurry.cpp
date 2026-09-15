// enunciado:
// https://codeforces.com/problemset/problem/750/A

#include <bits/stdc++.h>

using namespace std;

constexpr int MAX = 60*4;

int main (){
    int problems, time;
    cin >> problems >> time;
    
    int remaining = MAX-time;

    int maxProblems = 0;
    while(remaining>=(5*(maxProblems+1)) && maxProblems<problems){
        remaining-=(5*(maxProblems+1));
        maxProblems++;
    }

    cout << maxProblems << endl;

    return 0;
}