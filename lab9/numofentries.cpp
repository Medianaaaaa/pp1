#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> v;
    map <int, int> m;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a == k) 
        cnt++;
        v.push_back(a);
    }
    cout << cnt;
}