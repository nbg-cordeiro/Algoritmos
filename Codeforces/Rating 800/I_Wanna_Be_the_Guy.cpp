// enunciado:
// https://codeforces.com/problemset/problem/469/A

#include <iostream>
#include <set>
using namespace std;

int main (){
    set<int> levels;
    int qtLevels;
    cin>>qtLevels;
    int currentLevels;
    cin>>currentLevels;
    while(currentLevels>0){
        int num;
        cin>>num;
        levels.insert(num);
        currentLevels--;
    }
    cin>>currentLevels;
    while(currentLevels>0){
        int num;
        cin>>num;
        levels.insert(num);
        currentLevels--;
    }
    if(int(levels.size())==qtLevels)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    
    return 0;
}