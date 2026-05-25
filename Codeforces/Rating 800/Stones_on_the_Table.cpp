// enunciado:
// https://codeforces.com/problemset/problem/266/A

#include <iostream>
using namespace std;

int main(){
    int size, total=0;
    cin >> size;
    char past = 'A', color;
    for(int i=0; i<size; i++){
        cin >> color;
        if(i){
            if(color==past){
                total++;
            }
        }
        past=color;
    }
    cout << total << endl;
    return 0;
}