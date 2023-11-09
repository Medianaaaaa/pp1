#include <iostream>
using namespace std;
int main(){
    int n, max;
    cin >> n;
    int arr[n][n];
    for(int i = 0;i < n; i++){
        for(int j = 0; j < n; j++){ 
            cin >> arr[i][j];
         }
    } 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 && j == 0) 
             max = arr[0][0];   
             if(arr[i][j] > max) 
             max = arr[i][j];
         }
    }
    cout << max;
}