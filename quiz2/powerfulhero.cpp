#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt1 = 0, sum1 = 0;
    int cnt2 = 0, sum2 = 0;
    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0){
            cnt1++;
            sum1 += a[i];
        }
        else {
        cnt2++;
        sum2 += a[i];
        }
    }
    cout << "Left hand magic power: " << sum1 * cnt1 << endl;
    cout << "Right hand magic power: " << sum2 * cnt2;

}

