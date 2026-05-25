// enunciado:
// https://codeforces.com/problemset/problem/1352/A

#include <iostream>

using namespace std;

int main (){
     int n;
     cin >> n;
     while(n--){
          int num, factors=0, power = 1;
          cin >> num;

          int copy = num;
          while(copy>0){
               if(copy%10)
                    factors++;
               copy/=10;
          }
          cout<<factors;
          putchar('\n');

          bool first = true;
          while(num>0){
               if(num%10){
                    if(!first)
                         putchar(' ');
                    cout<<(num%10)*power;
                    first=false;
               }
               num/=10;
               power*=10;
          }
          putchar('\n');
     }

     return 0;
}