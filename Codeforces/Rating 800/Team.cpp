// enunciado:
// https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;

int main (){
    int cases, total = 0, sum, read;
    cin >> cases;
    while(cases--){
        sum=0;
        for(int i=0; i<3; i++){
            cin >> read;
            sum+=read;
        }
        if(sum>=2)
            total++;
    }
    cout << total << endl;
    return 0;
}