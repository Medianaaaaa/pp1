#include <iostream> 
using namespace std;  
int main() {  
    string s; 
    getline (cin, s); 
    char t; cin >> t; 
    int a, b; 
    bool x = false; 
    for (int i = 0; i < s.size(); i++) { 
        if(s[i]==t){ 
            cout << i << " "; 
            b = i; 
            break; 
        } 
    } 
    for (int i = b + 1; i < s.size(); i++){ 
        if(s[i] == t ){ 
            x = true; 
            a = i; 
        } 
    } 
    if(x){ 
        cout << a; 
    } 
    return 0; 
}
