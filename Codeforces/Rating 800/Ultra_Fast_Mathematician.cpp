// enunciado:
// https://codeforces.com/problemset/problem/61/A

#include <iostream>
using namespace std;

int main(){
    string num1, num2;
    cin >> num1 >> num2;
    string answer = num1;
    for(int i=0; i < int(answer.size());i++){
        if(num1[i]!=num2[i])
            answer[i]='1';
        else
            answer[i]='0';
    }
    cout << answer << endl;
    return 0;
}