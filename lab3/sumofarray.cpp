#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int array[n];
    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> array[i];
        sum += array[i];
    }
    cout << sum;
    return 0;
}