#include <iostream>
using namespace std;
int main(){
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i]) || isupper(s[i])){
            cout << s[i];
        }
    }
}