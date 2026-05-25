// enunciado:
// https://codeforces.com/problemset/problem/520/A

#include <iostream>
#include <set>
using namespace std;

int main(){
    int size;
    set<char> letters;
    cin >> size;
    string word;
    cin >> word;
    for(int i=0; i<size; i++){
        if(word[i]>='A' && word[i]<='Z')
            word[i]+=32;
        letters.insert(word[i]);
    }
    if(letters.size()==26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}