// enunciado:
// https://codeforces.com/problemset/problem/677/A

#include <iostream>
using namespace std;

int main(){
    int fence, friends, height, total=0;
    cin >> friends >> fence;
    for(int i=0; i<friends; i++){
        cin >> height;
        if(height>fence)
            total++;
        total++;
    }
    cout << total << endl;
    return 0;
}