#include <bits/stdc++.h>
#include <map>
#include <set>
#include <vector>

using namespace std; 

int main(){
    vector <int> v1;
    vector <int> v2;
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0){
            v1.push_back(a[i]);
        }
        if(a[i] % 2 == 1){
            v2.push_back(a[i]);
        }
    }
    sort(v1.begin(), v1.end());
    reverse(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    vector <int> :: iterator it1;
    for(it1 = v1.begin(); it1 != v1.end(); it1++){
        cout << *it1 << " ";
    }
    vector <int> :: iterator it2;
    for(it2 = v2.begin(); it2 != v2.end(); it2++){
        cout << *it2 << " ";
    }
}