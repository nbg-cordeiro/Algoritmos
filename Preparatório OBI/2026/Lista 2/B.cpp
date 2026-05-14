#include <iostream>

using namespace std;

int main (){
    int pessoasP=0, pessoasM=0, n;

    cin >> n;
    while(n--){
        int tamanho;
        cin >> tamanho;
        if(tamanho==1)
            pessoasP++;
        else
            pessoasM++;
    }

    int pequenas, medias;
    cin >> pequenas >> medias;

    if(pessoasP>pequenas || pessoasM>medias)
        cout << "N\n";
    else
        cout << "S\n";

    return 0;
}