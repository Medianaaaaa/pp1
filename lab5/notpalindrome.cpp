#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b,c;
    for(int i='a';i<'z';i++){
        char d=i;
        b=a+d;
        c=a+d;
        reverse(c.begin(),c.end());
        if(b==c) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}