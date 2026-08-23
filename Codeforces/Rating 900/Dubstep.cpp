// enunciado:
// https://codeforces.com/problemset/problem/208/A

#include <bits/stdc++.h>

using namespace std;

int main (){
    string line;
    getline(cin, line);

    size_t pos=0;
    while((pos=line.find("WUB", pos)) != string::npos){
        line.replace(pos,3," ");
        pos++;
    }

    stringstream read(line);
    string word;
    bool first=true;
    while(read >> word){
        if(!first)
            cout << " ";
        cout << word;
        first = false;
    }
    cout << "\n";
    
    return 0;
}
