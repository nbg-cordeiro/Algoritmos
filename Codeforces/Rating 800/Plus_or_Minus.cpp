// enunciado:
// https://codeforces.com/problemset/problem/1807/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    
    while(t--){
        vector<int> nums(3);
        for(int &n: nums)
            cin >> n;
        if((nums[0]+nums[1])==nums[2]){
            cout << "+\n";
        }else{
            cout << "-\n";
        }
    }


    return 0;
}