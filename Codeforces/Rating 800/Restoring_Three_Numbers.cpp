// enunciado:
// https://codeforces.com/problemset/problem/1154/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    vector<int> numbers(4);

    for(int &i: numbers){
        cin >> i;
    }
    sort(numbers.begin(),numbers.end());

    for(int i=0; i<3; i++){
        if(i)
            putchar(' ');
        cout << (numbers[3]-numbers[i]);
    }
    putchar('\n');
    
    return 0;
}