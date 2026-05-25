// enunciado:
// https://codeforces.com/problemset/problem/41/A

#include <iostream>
using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    if(str1.size() != str2.size()){
        cout << "NO" << endl;
        return 0;
    }
    int size = int(str1.size());
    for(int i=0; i<size; i++){
        if(str1[i] != str2[size-(i+1)]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}