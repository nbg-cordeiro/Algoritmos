// enunciado:
// https://codeforces.com/problemset/problem/1030/A

#include <iostream>
using namespace std;

int main(){
    int opinions;
    cin >> opinions;
    for(int i=0; i<opinions; i++){
        int current;
        cin >> current;
        if(current){
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}