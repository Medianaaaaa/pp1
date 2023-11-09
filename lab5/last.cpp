#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a[s.length()];
    int most=-1;
    int g;
    for(int i=0;i<s.length();i++){
        a[i]=(int)s[i];
    }
    for(int i=0;i<s.length();i++){
        if(a[i]>most) {
            most=a[i];
            g=i;
        }
    }
    cout<<s[g];

}