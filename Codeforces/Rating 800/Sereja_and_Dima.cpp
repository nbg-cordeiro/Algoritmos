// enunciado:
// https://codeforces.com/problemset/problem/381/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    vector<int> cards(n);
    int right = n-1, left=0;

    for(int &c: cards){
        cin >> c;
    }

    bool player = 0;
    int points[2]={0,0};
    
    while(n-- && left<=right){
        if(cards[left]>cards[right]){
            points[player]+=cards[left];
            left++;
        }else{
            points[player]+=cards[right];
            right--;
        }
        player= !player;
    }

    cout << points[0] << " " << points[1] << endl;

    return 0;
}