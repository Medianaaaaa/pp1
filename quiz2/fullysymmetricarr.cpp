#include <bits/stdc++.h>
using namespace std;
int rev(int x){
    int ans=0;
    while(x>0){
        ans*=10;
        ans+=x%10;
        x/=10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>=n/2){
            a[i]=rev(a[i]);
        }
    }
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}