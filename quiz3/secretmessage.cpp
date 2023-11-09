#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main() { 
    string s;
    getline (cin, s);
    for (int i=0; i<s.size(); i++) {
        if ((islower(s[i])) || (isupper(s[i]))){
            if(s[i]=='z'){
                cout << "a";
            }else if(s[i]=='Z'){
                cout<<"A";
            }else cout << char(int(s[i]) + 1);
        }
        else{
            cout << s[i];
        }
    }
    return 0;
}