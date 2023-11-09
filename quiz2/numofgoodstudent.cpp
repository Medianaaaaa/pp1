#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int t,cnt=0;
    cin>>t;
    for(int i=0;i<n;i++){
        if(a[i]<=t &&b[i]>=t){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}