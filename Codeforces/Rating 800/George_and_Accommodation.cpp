// enunciado:
// https://codeforces.com/problemset/problem/467/A

#include <iostream>
using namespace std;

int main(){
    int rooms, max, current, total=0;
    cin >> rooms;
    while(rooms--){
        cin >> current >> max;
        if(current + 2 <= max)
            total++;
    }
    cout << total << endl;
    return 0;
}