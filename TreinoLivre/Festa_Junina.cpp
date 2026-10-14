#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> posicoes(3);
    for(auto &i:posicoes){
        cin >> i;
    }
    sort(posicoes.begin(),posicoes.end());
    cout << (posicoes[2]-posicoes[0]) * 2 << "\n";
    return 0;
}