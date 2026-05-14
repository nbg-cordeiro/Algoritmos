#include <iostream>

using namespace std;

int main (){
    int n;
    bool lampada1 = false, lampada2 = false;
    cin >> n;
    while(n--){
        int interruptor;
        cin >> interruptor;
        if(interruptor==1)
            lampada1= !lampada1;
        else{
            lampada1= !lampada1;
            lampada2= !lampada2;
        }
    }
    cout << lampada1 << '\n' << lampada2 << '\n';

    return 0;
}