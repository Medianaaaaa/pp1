#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'|| s[i]=='e' || s[i]=='u' || s[i]=='i'|| s[i]=='o') 
        cnt++;
    }
    cout<<cnt;
}