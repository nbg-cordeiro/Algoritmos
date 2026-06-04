// enunciado:
// https://codeforces.com/problemset/problem/141/A

#include <iostream>

using namespace std;

int main (){
     string title, name, pile;
     cin >> title >> name >> pile;
     
     int pileLetters[26]={0};
     for(char c: pile)
          pileLetters[c-'A']++;

     for(char c: title)
          pileLetters[c-'A']--;
     for(char c: name)
          pileLetters[c-'A']--;
     
     bool enough = true;
     for(int i=0; i<26 && enough; i++){
          if(pileLetters[i]!=0)
               enough=false;
     }
     
     if(enough)
          cout << "YES\n";
     else
          cout << "NO\n";

     return 0;
}