// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2014f2p2_blefe

#include <unordered_set>
#include <iostream>
#include <vector>
using namespace std;

bool twoSum(unordered_set<int>& numbers, vector<int>& vectorNum, int goal){
    for(auto i:vectorNum){
        if(numbers.count(goal-i))
            return true;
    }
    return false;
}

int main (){
    int qtdA, qtdB, num;
    unordered_set<int> groupA, groupB;
    vector<int> vectorB;

    cin >> qtdA >> qtdB;

    while(qtdA--){
        cin >> num;
        groupA.insert(num);
    }
        
    while(qtdB--){
        cin >> num;
        if(!groupA.count(num) && !twoSum(groupB, vectorB,num)){
            cout << num << endl;
            return 0;
        }
        groupB.insert(num);
        vectorB.push_back(num);
    }

    cout << "sim" << endl;
    return 0;
}