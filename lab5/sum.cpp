#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int ac=0;
    int bc=0;
    for(int i=0;i<a.length();i++){
        if(a[i]<'9'&&a[i]>='0'&& i%2==0)
        ac+=a[i]-'0';
        if(a[i]<'9'&&a[i]>='0'&& i%2==1) 
        bc+=a[i]-'0';
    }
    if(ac!=bc) 
    cout<<"NO";
    else 
    cout<<"YES";
}