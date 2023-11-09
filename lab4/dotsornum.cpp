#include <iostream> 
using namespace std; 

int main(){ 
    int n; 
    int num = 1; 
    cin >> n; 
    for (int i = 0; i < n; i++){ 
        for (int j = 0; j < n; j++){ 
            if (j == n - num){ // 0 = 4 - 1 1=4-1 . 2=4-1. 3=4-1 
                cout << num; 
            }
            else{ 
                cout << "."; 
            } 
        } 
        cout << endl; 
        num++; 
    } 
}
