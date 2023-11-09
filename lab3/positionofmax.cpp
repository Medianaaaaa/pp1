#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++){
        if (array[i] > array[max]){
            max = i;
        }
    }
    cout << max + 1;
}