#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    for(int i=0;i<s.length();i++){
        int u=int(s[i]);
        if(u==122) 
        t+=char(97);
        else 
        t+=char(u+1);
    }
    cout<<t;
}