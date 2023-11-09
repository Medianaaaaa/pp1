#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string s; cin >> s;
    char x = s[0], y = s[0];
    int maxi = 1, y_maxi = 1;
    for(size_t i = 1; i < s.size(); ++i){
        if(s[i] != y){
            if(y_maxi > maxi){
                x = y;
                maxi = y_maxi;
            }
            y_maxi = 1;
            y = s[i];
        }else{
            y_maxi++;
        }
    }
    if(y_maxi > maxi){
        x = y;
        maxi = y_maxi;
    }
    cout << x << " " << maxi << endl;
    return 0;
}