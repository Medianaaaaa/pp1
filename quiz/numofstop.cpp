#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n; //kate
    cin >> n;

    int i = 0;

    while(n != 0){
        i+=1;
        if(i%7 == 0){
            continue;
        }
        else{
            if(i%2 == 0){
                n-=4;
            }
            else{
                n+=3;
            }
       }
    }

    cout << i + 1;
    return 0;

}