#include <iostream>

using namespace std;

bool digitos(int num, int alvo){
    int total=0;
    while(num>0){
        total+=num%10;
        num/=10;
    }
    return total==alvo;
}

int main (){
    int inferior, superior, alvo;
    cin >> inferior >> superior >> alvo;

    for(int i = superior; i>=inferior; i--){
        if(digitos(i,alvo)){
            cout << i << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';

    return 0;
}