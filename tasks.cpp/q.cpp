#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int i = 0;
    while(i < t.size()){
        for(int j = 0; j < s.size(); j++){
            if(s[j] != t[j+i]){
                cout << "NO";
                return 0;
            }
        }
        i += s.size();
    }
    cout << "YES";
   
}
