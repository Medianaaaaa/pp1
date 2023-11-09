#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; 
    cin >> n >> k;
    int arr[n][k];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            int sq = sqrt(arr[i][j]);
            if (pow(sq, 2) == arr[i][j]){
                arr[i][j] = sqrt(arr[i][j]);
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
