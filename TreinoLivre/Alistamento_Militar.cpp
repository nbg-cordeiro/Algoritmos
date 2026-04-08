// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1080

#include <iostream>

using namespace std;

int main (){
    int idade;
    cin >> idade;
    if(idade>70 || (idade<18 && idade>=16))
        cout<<"Alistamento facultativo"<<endl;
    else if(idade>=18)
        cout<<"Alistamento obrigatorio"<<endl;
    else
        cout<<"Nao pode se alistar"<<endl;
    return 0;
}