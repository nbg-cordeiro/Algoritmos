// enunciado:
// https://codeforces.com/problemset/problem/1703/A

#include <iostream>

using namespace std;

int main (){
     int n;
     cin >> n;
     string yes="YES";
     string word;
     while(n--){
          cin >> word;
          for(int i=0; i<int(word.length()); i++)
               word[i]=toupper(word[i]);
          if(word==yes)
               cout << "YES\n";
          else
               cout << "NO\n";
     }
     return 0;
}