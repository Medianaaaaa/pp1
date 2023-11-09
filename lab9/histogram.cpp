#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    long int s[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        int r = 0, l = 0;
        for(int j = i; j < n; j++){
            if(a[i] <= a[j]) 
            r++;
            else break;
        }
        for(int j = i - 1; j > 0; j--){
            if(a[i] <= a[j]) 
            l++;
            else break;
        }
        s[i] = a[i] * (r + l);
    }
    long int max = s[0];
    for(int i = 0; i < n; i++){
        if(s[i] > max) 
        max = s[i];
    }
    cout << max;
}