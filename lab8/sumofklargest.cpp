#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, a, sum=0;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a; 
        v.push_back(a);
    }
    cin >> a;
    sort(v.begin(), v.end());

    vector <int> :: iterator it;
    for(it = v.end() - a; it != v.end(); it++){
        sum += *it;
    }
    cout << sum;
}