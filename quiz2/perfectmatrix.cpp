#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int a, l=0;
    cin >>a;
    int b[a][a];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
        cin >> b[i][j];
        }
        }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
        if(b[i][j] != b[j][i]){
            cout<<"Not perfect.";
            return 0;
        }
        }
        }
    cout<<"Perfect.";
}