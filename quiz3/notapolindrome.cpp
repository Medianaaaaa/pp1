#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s; cin >> s; 
    string t; 
    t = s; 
    for(int i = 0; i < t.size(); i++ ) { 
        reverse(s.begin(), s.end()); 
        if(t == s){ 
        t.erase(0, 1); 
        s = t; 
        }else{ 
            cout << t.size(); 
            return 0; 
        } 
    } 
    cout << 0; 
    return 0;
}