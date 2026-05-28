// enunciado:
// https://codeforces.com/problemset/problem/59/A

#include <iostream>
using namespace std;

int main(){
    string word;
    cin >> word;
    int lower = 0, upper = 0;
    for(int i=0; i< int(word.size()) && word[i]!='\0'; i++){
        if(word[i]>='a' && word[i]<='z')
            lower++;
        if(word[i]>='A' && word[i]<='Z')
            upper++;
    }
    if(lower>=upper){
        for(int i=0; i< int(word.size()); i++){
            if(word[i]>='A' && word[i]<='Z')
                word[i]+=32;
        }
    }else{
        for(int i=0; i< int(word.size()); i++){
            if(word[i]>='a' && word[i]<='z')
                word[i]-=32;
        }
    }
    cout << word << endl;
    return 0;
}