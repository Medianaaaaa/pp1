#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a; 
        v.push_back(a);
    }
    reverse(v.begin(), v.end());
    vector <int> :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}