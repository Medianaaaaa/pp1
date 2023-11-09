#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a; 
        v.push_back(a);
    }
    cin >> a >> b;
    
    vector <int> :: iterator it;
    for(it = v.begin(); it != v.begin() + a; it++){
        cout << *it << " ";}
    cout << b << " ";
    for(it = v.begin() + a; it != v.end(); it++){
        cout << *it << " ";
    } 
}