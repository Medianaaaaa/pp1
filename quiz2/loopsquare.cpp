#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    if(k==1){
        for(int i=n;i<=m;i++){
            int g=sqrt(i);
            if(g*g==i){
                cout<<i<<' ';
            }
        }
    }
    else {
        for(int i=m;i>=n;i--){
            int g=sqrt(i);
            if(g*g==i){
                cout<<i<<' ';
            }
        }
    }
    return 0;
}