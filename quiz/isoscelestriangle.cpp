#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin >> n;

    int pr = 1;
    int sum = 0;

    while(n!=0){
        sum+= n%10;
        pr = pr * (n%10);
        n/=10;
    }
    cout << sum + pr ;
}