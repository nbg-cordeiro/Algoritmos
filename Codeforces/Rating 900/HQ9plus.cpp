// enunciado:
// https://codeforces.com/problemset/problem/133/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    string line;
    getline(cin, line);

    for(char c:line){
        switch(c){
            case 'H':
            case 'Q':
            case '9':
                cout << "YES\n";
                return 0;
        }
    }

    cout << "NO\n";

    return 0;
}