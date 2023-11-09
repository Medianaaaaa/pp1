#include <iostream>
using namespace std;
int s = 0;
int digit(int a){
    s += (a % 10) / 2;
    if(a < 10) 
    return s;
    return digit(a / 10);
}
int main(){
    int a;
    cin >> a;
    cout << digit(a);
}