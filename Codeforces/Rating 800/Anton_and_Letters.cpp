// enunciado:
// https://codeforces.com/problemset/problem/443/A

#include <iostream>
#include <set>
#include <regex>
using namespace std;

int main(){
    string line;
    getline(cin,line);

    regex pattern(R"(\w+)");
    sregex_iterator start = sregex_iterator(line.begin(),line.end(),pattern);
    sregex_iterator end = sregex_iterator();

    set<char>letters;
    for(sregex_iterator i = start; i!=end; i++){
        letters.insert(i->str().at(0));
    }
    cout << int(letters.size()) << endl;
    return 0;
}