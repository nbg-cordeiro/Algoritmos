// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=monitores.eaj-bazinga

#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main (){
    unordered_map<string, unordered_set<string>> vence ={
        {"tesoura",{"papel","lagarto"}},
        {"papel",{"pedra","Spock"}},
        {"pedra",{"lagarto","tesoura"}},
        {"lagarto",{"Spock","papel"}},
        {"Spock",{"tesoura","pedra"}}
    };

    string sheldon, raj;
    cin >> sheldon >> raj;
    
    if(sheldon == raj){
        cout << "De novo!" << endl;
    }else if(vence[sheldon].count(raj))
        cout << "Bazinga!" << endl;
    else
        cout << "Raj trapaceou!" << endl;
    return 0;
}