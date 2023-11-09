#include <iostream>
#include <algorithm>
using namespace std;
int s=0;
int ischeater(int n, int k, int a[]){
    if(n == 1) 
    return 0;
    if((a[n - 1] - a[n - 2]) <= k) 
    return 1;
    return ischeater(n - 1, k, a);
}
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    if(ischeater(n, k, a) > 0) 
    cout << "cheater";
    else 
    cout << "no";

}