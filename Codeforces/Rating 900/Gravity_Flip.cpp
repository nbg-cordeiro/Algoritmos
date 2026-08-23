// enunciado:
// https://codeforces.com/problemset/problem/405/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    vector<int> boxes(n);
    
    for(int &b : boxes){
        cin >> b;
    }

    sort(boxes.begin(), boxes.end());

    for(int i=0; i<n; i++){
        if(i)
            cout << " ";
        cout << boxes[i];
    }
    cout << "\n";

    return 0;
}