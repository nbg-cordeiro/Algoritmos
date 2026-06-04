// enunciado:
// https://codeforces.com/problemset/problem/1335/A

#include <iostream>

using namespace std;

int main (){
     int n;
     cin >> n;
     while(n--){
          int candies;
          cin >> candies;
          candies--;
          cout << (candies/2);
          putchar('\n');
     }

     return 0;
}