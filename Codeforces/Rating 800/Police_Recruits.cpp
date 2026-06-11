// enunciado:
// https://codeforces.com/problemset/problem/427/A

#include <iostream>

using namespace std;

int main (){
     int events, oficers=0, crimes=0;
     cin >> events;

     while(events--){
          int num;
          cin >> num;
          if(num>=0)
               oficers+=num;
          else{
               oficers--;
               if(oficers<0){
                    crimes++;
                    oficers=0;
               }
          }
     }

     cout << crimes;
     putchar('\n');

     return 0;
}