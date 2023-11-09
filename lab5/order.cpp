#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string f=s;
    int x=0;
    for(int i=0;i<s.length();i++){
        f[i]=s[i];
    }
    sort(f.begin(),f.end());
    for (int i = 0; i < s.length(); i++){
        if (f[i] == s[i]) 
        x++;
    }
    if(x=s.length()) 
    cout<<"YES";
    else 
    cout<<"NO";
}