// enunciado:
// https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    string line;
    cin >> line;

    int current=0, counter=0;
    for(int i=0; line[i]!='\0'; i++){
        if(counter==6 && current==line[i]){
            cout << "YES\n";
            return 0;
        }
        if(line[i]!=current){
            counter=0;
            current=line[i];
        }
        counter++;
    }
    cout << "NO\n";
    return 0;
}

