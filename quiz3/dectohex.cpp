#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;
string f(int n, int k, string s){
    if(n / k == 0){
        if(n >= 10)return s += (char)('A' + (n - 10));
        else return s += (char)( 48 + n);
    }else{
        if(n % k >= 10) s +=  (char)( 'A' + (n % k - 10));
        else s += (char)( 48 + n % k);
        return f(n / k, k, s);
    }
}
int main(){
    int n,k=16; cin>> n;
    string s;
    s = f(n,k,s);
    reverse(s.begin(), s.end());
    cout << s;
}