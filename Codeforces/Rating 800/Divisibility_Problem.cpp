// enunciado:
// https://codeforces.com/problemset/problem/1328/A

#include <iostream>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    while(cases--){
        int a,b;
        cin >> a >> b;
        if(!(a%b))
            cout << 0 << endl;
        else{
            if(a>b){
                int partial = a/b;
                partial++;
                cout << (partial*b)-a << endl;
            }else{
                cout << b-a << endl;
            }
        }
    }
    return 0;
}