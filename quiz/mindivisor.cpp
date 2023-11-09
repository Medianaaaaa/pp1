#include <iostream>
using namespace std;

int main(){
    int x;
    int n = 3;
    cin >> x;
    if (x % 2 == 0){
        cout << 2;
    }
    else {
        while (x % n != 0){
            n += 2;
        }
        cout << n;
    }
    return 0;
}