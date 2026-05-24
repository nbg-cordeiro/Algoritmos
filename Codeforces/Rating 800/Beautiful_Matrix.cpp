// enunciado:
// https://codeforces.com/problemset/problem/263/A

#include <iostream>
using namespace std;

int main (){
    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++){
            int num;
            cin >> num;
            if(num){
                i-=2;
                j-=2;
                if(i<0)
                    i*=-1;
                if(j<0)
                    j*=-1;
                cout << j+i << endl;
                return 0;
            }
        }
    }
    return 0;
}