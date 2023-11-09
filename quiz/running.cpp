#include <iostream>
using namespace std;

int main(){

    double x ,y;
    cin >> x >> y;

    int cnt = 0;

    if(x == y){
        cout << 1;
    }
    else{
        while(x < y){
            x+= x*10/100;
            cnt++;
        }
        cout << cnt;
    }

}