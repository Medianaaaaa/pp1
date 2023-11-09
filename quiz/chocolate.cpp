#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    int max = -100000;
    for (int i = 0; i < a[i]; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    cout << sum << " " << max;
}