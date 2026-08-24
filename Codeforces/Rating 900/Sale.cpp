// enunciado:
// https://codeforces.com/problemset/problem/34/B

#include <bits/stdc++.h>

using namespace std;

int main (){
    int n, m;
    cin >> n >> m;
    
    vector<int> tvs(n);
    for(int &tv: tvs){
        cin >> tv;
    }
    
    sort(tvs.begin(), tvs.end());

    int total=0, totalIndex=0;
    for(int i=0; i<n && totalIndex<m; i++){
        if(tvs[i]<0){
            total-=tvs[i];
            totalIndex++;
        }
    }

    cout << total << endl;
    
    return 0;
}