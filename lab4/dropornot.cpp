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
    int minSum = 1000;
    int x;
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 0; j < k; j++){
           sum += arr[i][j];
        }
        if (minSum > sum){
            minSum = sum;
            x = i;
        }
    }
    cout << x + 1;
}

