#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int b[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<a.length();i++){
        b[a[i]-'0']++;
    }
    sort(b,b+10);

    for(int i=0;i<9;i++){
        if(b[i]!=b[i+1]&& b[i]!=0) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}