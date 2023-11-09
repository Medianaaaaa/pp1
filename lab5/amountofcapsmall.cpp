#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int b=0;
    int c=0;
    for(int i=0;i<a.length();i++){
        if((a[i]<='Z') && (a[i]>='A')) b++;
        if((a[i]<='z') && (a[i]>='a')) c++;
    }
    cout<<c<<" "<<b;
}