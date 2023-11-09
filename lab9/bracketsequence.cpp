#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack <int> s;
    string a;
    cin >> a;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '(') s.push(a[i]);
        else {
            if (s.empty()) {
                cout << "NO"; 
                return 0;
            }
            s.pop();
        }
    }
    if(s.empty()) {
        cout << "YES";
    }
    else 
    cout << "NO";
}