#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int year;
    cin >> year;
    if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)){
        cout << "NO";
    } 
    else {
        cout << "YES";
    } 
    return 0;
}
