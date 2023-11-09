#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main (){
    int fir = 0;
    string s, a = "";
    getline (cin, s);
    s += ' ';
    for (int i = 0; i < s.size(); i++){
        if (s[i] == ' '){
            if (fir == 0){
                cout << a << endl;
            }
            a = "";
            fir = 0;
        }
        else {
            if (s[i] - '0' >= 0 && s[i] - '0' < 10){
                fir = 1;
            }
            a += s[i];
        }
    }
}