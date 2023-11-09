#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int ss=s.length();
    int tt=t.length();
    string k="a";
    if(tt%ss==0){
        for(int i=0;i<tt/ss;i++){
            k=k+s;
        }
        if (k==("a"+t)) 
        cout<<"YES";
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }

}