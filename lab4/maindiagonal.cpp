#include <iostream>
using namespace std;

int main(){
    int n, b, c;
    cin >> n;
    int s = 0;
    int a[n][n];
    int max[n];
    int maxx = -1e9;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        } 
    }
    for (int i = 0; i < n; i++){
                max[i] = a[i][i];
                if (max[i] > maxx){
                    maxx = max[i];
                    c = i + 1;
                    b = i + 1;
                } 
            }
    cout << "Maximum element is: "<< maxx << " with coordinates: " << b << ";" << c;
}