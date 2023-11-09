#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin >> n;
    int x = n;
    int rev = 0;
    int rem;

    while(n!=0){
        rem = n%10;
        rev = rev * 10 + rem;
        n/=10;
    }

    if(x == rev){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}