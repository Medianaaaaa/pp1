#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int b,c;
    cin>>b>>c;
    for(int i=b;i<c+1;i++)
    cout<<a[i];
}