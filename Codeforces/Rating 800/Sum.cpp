// enunciado:
// https://codeforces.com/problemset/problem/1742/A

#include <iostream>
#include <unordered_set>
using namespace std;

int main (){
     int n;
     cin >> n;
     unordered_set<int> nums;
     while(n--){
          int sum = 0;
          int num;
          nums.clear();
          for(int i=0; i<3; i++){
               cin >> num;
               sum+=num;
               nums.insert(num*2);
          }
          if(nums.count(sum))
               cout << "YES\n";
          else
               cout << "NO\n";
     }

     return 0;
}