#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    //cout << n % 2;
    int v0, v1, v2, v3;
    v0 = n % 2;
    n = n / 2;
    v1 = n % 2;
    n = n / 2;
    v2 = n % 2;
    n = n / 2;
    v3 = n % 2;
    n = n / 2;
    int result = 1*v3 + 2*v2 + 4*v1 + 8*v0;
    cout << result;
    return 0;
}