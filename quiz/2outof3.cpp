#include <iostream>
using namespace std;

int main(){

    int a,b,c;
    cin >> a >> b >> c;

    if(a == b and c!=b || a==c and c!=b || c== b and a!=b){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}