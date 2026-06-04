// enunciado:
// https://codeforces.com/problemset/problem/510/A

#include <iostream>

using namespace std;

int main (){
     int lines, size;
     cin >> lines >> size;

     string filled(size,'#');
     string notfilled(size-1,'.');

     bool side = true;
     for(int i=0; i<lines; i++){
          if(!(i&1))
               cout << filled;
          else{
               if(side){
                    cout << notfilled;
                    putchar('#');
               }else{
                    putchar('#');
                    cout << notfilled;
               }
               side = !side;
          }
          putchar('\n');
     }
     return 0;
}