// enunciado:
// https://codeforces.com/problemset/problem/339/A

#include <iostream>
using namespace std;

int main (){
    char string[101];
    cin >> string;
    bool first=true;

    for(int i=0; i<3; i++){
        for(int j=0; j<101 && string[j]!='\0'; j++){
            if(string[j]=='1' + i){
                if(first==false)
                    cout<<'+';
                cout<<(char)('1' + i);
                first=false;
            }
        }
    }
    cout << endl;
    return 0;
}