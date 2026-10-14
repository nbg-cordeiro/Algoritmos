#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using adj = vector<vector<int>>;


void solve() {
    int n;
    cin >> n;
    
    vi nums(n);
    for(int &i:nums)
        cin >> i;

    int max = nums[0];
    for(int i=1; i<n; i++){
        if(nums[i]>max)
            max = nums[i];
    }

    int total = 0;
    for(int& i: nums){
        total+=(max-i);
    }

    cout << total << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int t;
    // cin >> t;
    // while (t--){ solve(); }
    solve();

    return 0;
}