// enunciado:
// https://codeforces.com/problemset/problem/705/A

#include <iostream>
using namespace std;

int main(){
    int level;
    cin >> level;
    for(int i=0; i<level; i++){
        if(i)
            cout<<" ";
        if(i&1){
            cout<<"I love ";
        }else
            cout<<"I hate ";
        if(i == level-1)
            cout<<"it";
        else
            cout<<"that";
    }
    cout<<endl;
    return 0;
}    