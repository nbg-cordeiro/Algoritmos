// enunciado:
// https://codeforces.com/problemset/problem/116/A

#include <iostream>
using namespace std;

int main(){
    int stops, passengers=0, change, maximum=0;
    cin >> stops;
    for(int i=0; i<stops; i++){
        cin >> change;
        passengers -= change;
        cin >> change;
        passengers += change;
        if(passengers>maximum)
            maximum = passengers;
    }
    cout << maximum << endl;
    return 0;
}