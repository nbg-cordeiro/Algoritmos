// enunciado:
// https://codeforces.com/problemset/problem/200/B

#include <iostream>
using namespace std;

int main(){
    int drinks, percentage;
    cin >> drinks;
    double sum=0;
    for(int i=0; i<drinks;i++){
        cin >> percentage;
        sum+=percentage;
    }
    cout << (sum/drinks) << endl;
    return 0;
}