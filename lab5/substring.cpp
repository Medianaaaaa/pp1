#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b;
    cin>>b;
    size_t f=a.find(b);
    if(f!=-1) cout<<"YES";
    else cout<<"NO";
}