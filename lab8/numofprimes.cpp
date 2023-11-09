#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isprime(int a){
    for(int i = 2; i < a; i++){
        if(a % i == 0 ) 
        return false;
    }
    return true;
}
int main(){
    int n, a;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a; 
        v.push_back(a);
        }
    cin >> a;
    
    vector <int> :: iterator it;
    int cnt = 0;
    for(it = v.begin(); it != v.end(); it++){
        if(isprime(*it) && *it >= a) 
        cnt++; 
    }
    cout << cnt;
}