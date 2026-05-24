// enunciado:
// https://codeforces.com/problemset/problem/236/A

#include <iostream>
using namespace std;

int main (){
    char letters[26]={};
    char character;
    while(cin >> character){
        if(character=='\0')
            break;
        letters[character-'a']++;
    }
    int total=0;
    for(int a=0; a<26; a++){
        if(letters[a])
            total++;
    }
    if(total&1)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
    return 0;
}