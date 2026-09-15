// enunciado:
// https://codeforces.com/problemset/problem/1399/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> nums(n);
        for(int &i: nums){
            cin >> i;
        }
        
        sort(nums.begin(),nums.end());

        bool possible = true;
        for(int i=1; i<n; i++){
            if(nums[i]-nums[i-1]>1){
                possible=false;
                break;
            }
        }

        if(possible){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}