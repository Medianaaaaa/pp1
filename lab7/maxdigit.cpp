#include <iostream>
#include <cmath>
using namespace std;
int maxn(string a, int t){
    if(t == 1) 
    return a[0] - '0';
    return max(a[t - 1] -'0', maxn(a, t - 1));
}
int main(){
    string a;
    cin >> a;
    int t = a.size();
    cout << maxn(a, t);
}