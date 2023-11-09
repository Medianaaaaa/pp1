#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s = 0;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
            if (j + i == n-1) 
            s += a[i][j];
        } 
    }
    cout << s;
}