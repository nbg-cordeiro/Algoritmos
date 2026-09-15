// enunciado:
// https://codeforces.com/problemset/problem/1512/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> nums(n);
        for(int &i: nums)
            cin >> i;
        
        int possibleSpy = nums[0];
        bool foundAnother = false;
        for(int i=1; i<3; i++){
            if(nums[i]==possibleSpy){
                foundAnother=true;
            }
        }
        if(!foundAnother){
            cout << 1 << endl;
            continue;
        }
        for(int i=1; i<n; i++){
            if(nums[i]!=possibleSpy){
                cout << i+1 << endl;
                break;
            }
        }
    }

    return 0;
}