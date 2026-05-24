// enunciado:
// https://codeforces.com/problemset/problem/148/A

#include <iostream>
#include <set>
using namespace std;

int main(){
    int intervals[4];
    for(int i=0; i<4; i++)
        cin >> intervals[i];
    int dragons;
    cin>>dragons;
    set<int>dragonsHurt;
    for(int i=0; i<4; i++){
        for(int j = 1; j<=dragons; j++){
            if(j%intervals[i]==0){
                dragonsHurt.insert(j);
            }
        }
    }
    cout << int(dragonsHurt.size()) << endl;
    return 0;
}