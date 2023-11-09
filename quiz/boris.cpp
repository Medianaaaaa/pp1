#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,a,d;

    cin >> n >> a >> d;

    int sum = 0;

    for(int i = a;i<=d*(n-1) + a;i+=d){
        cout << i << " ";
        sum+=i;
    }
    cout << endl;
    cout << "sum: " << sum;

}