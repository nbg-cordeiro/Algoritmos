// enunciado:
// https://codeforces.com/problemset/problem/228/A

#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> colors;
    int color;
    for(int i=0; i<4; i++){
        cin >> color;
        colors.insert(color);
    }
    cout << 4 - colors.size() << endl;
    return 0;
}