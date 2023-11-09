#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int maxi = 0;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        maxi = max(maxi, a);
    }
    cout << maxi;
    return 0;
}