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
        int sum = 0;
        for (int j = 0; j < k; j++){
            sum += arr[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << sum << endl;
    }
    for (int j = 0; j < k; j++){
        int sum = 0;
        for (int i = 0; i < n; i++){
            sum += arr[i][j];
        }
        cout << "The sum of column number " << j + 1 << " is " << sum << endl;
    }
}
