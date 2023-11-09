#include <bits/stdc++.h>
using namespace std;

int main(){

    int mid,end,fin;

    cin >> mid >> end >> fin;

    if(mid + end + fin >= 70 & mid + end >= 30 & fin >= 20){
        cout << "YES!" << endl;
    }
    else{
        cout << "NO.";
    }

}