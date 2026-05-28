// enunciado:
// https://codeforces.com/problemset/problem/977/A

#include <iostream>
using namespace std;

int main(){
    int number, times;
    cin >> number >> times;
    for(int i=0; i<times; i++){
        if(number%10)
            number--;
        else
            number/=10;
    }
    cout << number << endl;
    return 0;
}