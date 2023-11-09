#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int cnt = 0;
    int save = 0;

    while(save < 500000){
        save = save + n*30/100;
        n = n + n*10/100;
        cnt+=1;
    }

    cout << cnt;

}