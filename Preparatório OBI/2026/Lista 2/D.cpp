#include <iostream>

using namespace std;

int main (){
    int total = 0, n;

    cin >> n;
    for(int dias=1; dias<=n; dias++){
        int visitas;
        cin >> visitas;
        total+=visitas;
        if(total>=1000000){
            cout << dias << '\n';
            break;
        }
    }
    return 0;
}