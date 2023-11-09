#include <iostream>
using namespace std;

int main(){
    string s;
    int n = 26;
    cin >> s;
    int u = "";
    for (int i = 0; i < s.length(); i++){
        int k = s[i] - 'a' + 1;
        char c = (n - k + 'a');
        u += c;
    }
    cout << u;
} 