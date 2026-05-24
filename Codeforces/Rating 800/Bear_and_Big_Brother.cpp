// enunciado:
// https://codeforces.com/problemset/problem/791/A

#include <iostream>
using namespace std;

int main ()
{
    int small, big;
    cin >> small >> big;
    int years = 1;
    while(small*=3, big*=2, small<=big)
        years++;
    cout << years << endl;
    
    return 0;
}