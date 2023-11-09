#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
        cin >> a[i][j];
        }
    }
    int max = -100000000;
    int k, l;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] > max){
               max = a[i][j];
               k = i;
               l = j;
            }
        }
    }
    cout << ++k << " " << ++l;
    return 0;
}