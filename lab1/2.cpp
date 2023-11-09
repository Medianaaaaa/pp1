#include <iostream>
using namespace std;

int main (){
    int m, n, k;
    cin >> n >> k;
    int a, b;
    a = k / 100 ;
    b = k % 10;
    m = a + b;
    cout << n + m;
    return 0;
}