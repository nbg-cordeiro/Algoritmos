// enunciado:
// https://codeforces.com/problemset/problem/266/B

#include <iostream>
using namespace std;

int main(){
    int size, turns;
    cin >> size >> turns;
    string line;
    cin >> line;
    if(size==1){
        cout << line << endl;
        return 0;
    }
    for(int a=0; a<turns; a++){
        for(int i=0; i<(size-1); i++){
            if(line[i]=='B' && line[i+1]=='G'){
                line[i]='G';
                line[i+1]='B';
                i++;
            }
        }
    }
    cout << line << endl;
    return 0;
}