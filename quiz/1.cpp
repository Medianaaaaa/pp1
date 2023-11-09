#include <iostream>
using namespace std;

int main (){
    int i = 3;
    int n;
    cin >> n;
    if (n % 2 == 0){
        cout << 2;
    } else {
        while (n % i != 0){
            i += 2;
        }
        cout << i;
    }
}
