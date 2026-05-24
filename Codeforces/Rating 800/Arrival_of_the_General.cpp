// enunciado:
// https://codeforces.com/problemset/problem/144/A

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int total;
    cin >> total;
    vector<int> alturas;
    for(int i=0; i<total; i++){
        int num;
        cin >> num;
        alturas.push_back(num);
    }
        
    int maxIndex=0, minIndex=0;
    for(int i=0; i<total; i++){
        if(alturas[i]>alturas[maxIndex])
            maxIndex=i;
        if(alturas[i]<=alturas[minIndex])
            minIndex=i;
    }
    int moves = maxIndex;
    moves += total-(minIndex+1);
    if(minIndex<=maxIndex)
        moves--;
    cout << moves << endl;
    return 0;
}