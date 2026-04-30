#include <iostream>

using namespace std;

int main (){
    int idade1, idade2, idade3;
    cin >> idade1 >> idade2 >> idade3;

    if(idade1<idade2)
        swap(idade1,idade2);
    if(idade2<idade3)
        swap(idade2,idade3);
    if(idade1<idade2)
        swap(idade1,idade2);

    cout << idade2 << endl;

    return 0;
}