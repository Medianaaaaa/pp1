#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    char a;
    cin>>a;
    int count=0;
    int b;
    cin>>b;
   for(int i=0;i<s.length();i++){
       if(s[i]==a) count++;
   }
   count==b ? cout<<"YES" : cout<<"NO";
}