// enunciado:
// https://codeforces.com/problemset/problem/268/A

#include <iostream>
#include <unordered_set>
using namespace std;

int main (){
     int n, sum=0, guestUniform;
     unordered_multiset<int> guest;
     cin >> n;
     int home[n];

     for(int i=0; i<n; i++){
          cin >> home[i] >> guestUniform;
          guest.insert(guestUniform);
     }

     for(int i=0; i<n; i++)
          sum+=guest.count(home[i]);
          
     cout << sum;
     putchar('\n');

     return 0;
}