#include <iostream>
using namespace std;

int main(){
    int n;
    int i = 2;
    cin >> n;
    while(i <= n){
        if (n % i == 0){
            cout<<i;
            break;
        } else{
            i++;
        }
    }
    return 0;
}