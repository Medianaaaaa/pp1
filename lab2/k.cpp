#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int x = 1;
    while (x * x <= n){
        cout << x * x << endl;
        x ++;
    }
}