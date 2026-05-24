// enunciado:
// https://codeforces.com/problemset/problem/344/A

#include <iostream>
using namespace std;

int main(){
    int pieces, groups=1, last, current;
    cin >> pieces >> last;
    for(int i=1; i<pieces;i++){
        cin>>current;
        if(current!=last){
            groups++;
            last = current;
        } 
    }
    cout << groups << endl;
    return 0;
}