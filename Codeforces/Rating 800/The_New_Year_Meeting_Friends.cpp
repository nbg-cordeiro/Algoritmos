// enunciado:
// https://codeforces.com/problemset/problem/723/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
     vector<int> distances(3);
     for(int i=0; i<3; i++)
          cin >> distances[i];
     sort(distances.begin(),distances.end());
     cout << distances[2]-distances[0];
     putchar('\n');
     return 0;
}