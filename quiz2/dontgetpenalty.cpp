#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int t,cnt=0;
    cin>>t;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>t){
                cout<<"Penalty!";
                return 0;
            }
        }
    }
    cout<<"No penalty for today.";
    return 0;
}