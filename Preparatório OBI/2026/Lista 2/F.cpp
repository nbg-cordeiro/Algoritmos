#include <iostream>

using namespace std;

int main (){
    string dir1, dir2;
    cin >> dir1 >> dir2;
    if(dir1==dir2)
        cout << 0 << '\n';
    else if(((dir1=="norte" || dir1=="sul") && 
             (dir2=="norte" || dir2=="sul"))||
             (dir1=="oeste" || dir1=="leste")&&
             (dir2=="oeste" || dir2=="leste"))
        cout << 180 << '\n';
    else
        cout << 90 << '\n';
    return 0;
}