#include <iostream>
using namespace std;

int main (){
    int a, b, c;
    int costa, costb, costc;
    cin >> a >> b >> c;
    cin >> costa >> costb >> costc;
    int money;
    cin >> money;
    if (a * costa + b * costb + c * costc <= money){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}