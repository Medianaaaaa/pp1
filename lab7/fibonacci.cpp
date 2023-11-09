#include <iostream>
using namespace std;
int fib(int a){
    if(a == 1) 
    return 0;
    if(a == 2) 
    return 1;
    return fib(a - 2) + fib(a - 1);
}
int main(){
    int a;
    cin >> a;
    cout << fib(a);
}