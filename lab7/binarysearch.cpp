#include <iostream>
using namespace std;
bool ishas(int m, int a[], int x)
{
    if(m == 1 && a[0] != x) 
    return false;
    if(a[m - 1] == x) 
    return true;
    return ishas(m - 1, a, x);
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    if(ishas(n, a, x)) 
    cout << "Yes";
    else 
    cout << "No";
}