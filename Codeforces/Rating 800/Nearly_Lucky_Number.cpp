// enunciado:
// https://codeforces.com/problemset/problem/110/A

#include <iostream>
using namespace std;

int main(){
    string number;
    cin >> number;
    int total=0;
    for(int i=0; i<int(number.size()); i++){
        if(number[i]=='4' || number[i]=='7')
            total++;
    }
    if(!total){
        cout << "NO" << endl;
        return 0;
    }
    while(total>0){
        if(total%10 != 4 && total%10 != 7){
            cout << "NO" << endl;
            return 0;
        }
        total/=10;
    }
    cout << "YES" << endl;
    return 0;
}