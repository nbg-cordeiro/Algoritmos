// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1066

#include <iostream>
#include <unordered_set>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_set<char> quebradas;
    int totalQuebradas;
    cin >> totalQuebradas;

    string teclas;
    cin >> teclas;
    for(char i:teclas)
        quebradas.insert(tolower(i));
    
    int qtdMensagens;
    cin >> qtdMensagens;
    cin.ignore(100,'\n');
    for(int i=1; i<=qtdMensagens; i++){
        string mensagem;
        getline(cin, mensagem);
        bool grampeado = false;
        for(int j=0; j<int(mensagem.size());j++){
            if(quebradas.count((char)tolower(mensagem[j]))){
                grampeado=true;
                break;
            }
        }
        cout << "Mensagem #" << i;
        if(grampeado)
            cout << ": Carlos\n";
        else
            cout << ": Beto ou Carlos\n";
    }
    return 0;
}