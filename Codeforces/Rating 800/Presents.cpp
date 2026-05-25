// enunciado:
// https://codeforces.com/problemset/problem/136/A

#include <iostream>
using namespace std;

int main(){
    int map[101], n;
    cin >> n;
    for(int i=1; i<=n; i++){
        int read;
        cin >> read;
        map[read]=i;
    }
    for(int i=0; i<n; i++){
        if(i)
            cout << " ";
        cout << map[i+1];
    }
    cout << endl;
    return 0;
}