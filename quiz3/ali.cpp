#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

string strToBool(string str) {
    if (str == "0"){
        return "false";
    }
    else if (str == "1"){
        return "true";
    }
    else {
        return str;
    }
}

int main (){
    int fir = 0;
    string s, k = "";
    char c;
    cin >> s;
    cout << strToBool(s);
}