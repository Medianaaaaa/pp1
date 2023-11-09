#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;
int main(){
    stack <char> s;
    string a;
    cin >> a;
    s.push('0');
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '0') {
            s.push('0');
        }
        if(a[i] == '1'){
            if(s.top() == '1') 
            s.pop();
            else if(s.top() == '0' || s.empty() == 1){
                s.push('1');
            }
        }
    }
    string b = "";
    while(s.size() != 1){
    b += s.top();
    s.pop();
  }
  reverse(b.begin(), b.end());
  cout << b;
}