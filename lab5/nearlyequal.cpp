#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string a,c;
    cin>>a>>c;
    int b[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int d[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<a.length();i++){
        b[a[i]-'a']++;
    }
    for(int i=0;i<a.length();i++){
        d[c[i]-'a']++;
    }
    for(int i=0;i<25;i++){
        if(b[i]!=d[i]&& b[i]!=0) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}