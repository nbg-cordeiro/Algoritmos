// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1173

#include <iostream>
#include <set>
using namespace std;

int main (){
    set<int> visits;
    int total;
    cin >> total;
    while(total--){
        int id;
        cin >> id;
        visits.insert(id);
    }
    cout << visits.size() << endl;
    return 0;
}