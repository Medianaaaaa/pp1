#include <bits/stdc++.h>
using namespace std;
int cnt[1001];
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt[a[i]]++;
    }
    int mx=0;
    for(int i=1;i<=1000;i++){
        if(mx<cnt[i]){
            mx=cnt[i];
        }
    }
    for(int i=1000;i>0;i--){
        if(cnt[i]==mx){
            cout<<i<<' ';
        }
    }

}