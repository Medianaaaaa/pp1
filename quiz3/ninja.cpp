#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main (){
    int fir = 0;
    string s;
    char c;
    cin >> c >> s;
    s += ' ';
    for (int i = 0; i < s.size(); i++){
        if (s[i] != c){
            cout << s[i];
        }
    }
}