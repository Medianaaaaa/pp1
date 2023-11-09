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
    v.erase(v.begin() + a, (v.begin() + b + 1));
    vector <int> :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " "; 
    }
    
}