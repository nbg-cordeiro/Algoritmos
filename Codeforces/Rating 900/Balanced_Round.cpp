// enunciado:
// https://www.geeksforgeeks.org/cpp/vector-erase-in-cpp-stl/

#include <bits/stdc++.h>

using namespace std;

int main (){
    int cases;
    cin >> cases;

    while(cases--){
        int n, max;
        cin >> n >> max;

        vector<int> problems(n);

        for(int &i: problems){
            cin >> i;
        }

        sort(problems.begin(), problems.end());

        int maxWindow=1, currentWindow=1;
        for(int i=0; i<(n-1); i++){
            if((problems[i+1]-problems[i]>max)){
                currentWindow=0;
            }
            currentWindow++;
            if(currentWindow>maxWindow){
                maxWindow=currentWindow;
            }
        }

        cout << n-maxWindow << endl;
    }
    
    return 0;
}