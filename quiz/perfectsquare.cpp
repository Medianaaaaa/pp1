#include <bits/stdc++.h>
using namespace std;
bool isSquare(long double x){
    if (x >= 0){
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

int main (){
    long long x;
    cin >> x;
    if (isSquare(x)){
        cout << "Perfecto";
    }
    else {
        cout << "Simple";
    }
    return 0;
}