#include <iostream>
using namespace std;

int main (){
    int n, m, b;
    cin >> n >> m >> b;
    if ((((n + m) * 10) / 100) < b){
        cout << "Boris, you are punished!";
    }
    else {
        cout << "You are my sweet baby";
    }
}