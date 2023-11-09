#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s; cin >> s;
    string t; cin >> t;
    char c; cin >> c;
    for(int i=0; i<s.size(); i++){
        
            if(t.find(s[i]) == string::npos){
                cout << s[i];
            }else{
                cout << c;
            }
    }
}