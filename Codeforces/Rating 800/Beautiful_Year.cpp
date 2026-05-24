// enunciado:
// https://codeforces.com/problemset/problem/271/A

#include <iostream>
using namespace std;

int main(){
    int year;
    cin >> year;
    while(1){
        year++;
        bool special=true;
        int digits[4];
        int copy = year;
        for(int i=0;i<4;i++){
            digits[i]=copy%10;
            copy/=10;
        }
        for(int i=0; i<4 && special; i++){
            for(int j=i+1; j<4 && special; j++){
                if(digits[i]==digits[j]){
                    special=false;
                }
            }
        }
        if(special){
            cout << year << endl;
            return 0;
        }
    }
    return 0;
}