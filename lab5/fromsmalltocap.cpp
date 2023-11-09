#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if((a[i]<='z') && (a[i]>='a'))
        a[i]=a[i]-'a'+'A';
    }
    cout<<a;
}