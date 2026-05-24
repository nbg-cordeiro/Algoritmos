// enunciado:
// https://codeforces.com/problemset/problem/617/A

#include <iostream>
using namespace std;

int main ()
{
    int position;
    cin >> position;
    int steps = 0;
    for(int i=5; i>0; i--){
        if(position>=i){
            steps+=(position/i);
            position-=(position/i)*i;
        }
    }
    cout << steps << endl;
    return 0;
}