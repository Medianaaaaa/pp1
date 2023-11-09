#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main(){
    int n, cnt = 0;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a; 
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int d[1001];
    for(int i = 0; i < 1001; i++){
        d[i] = 0;
    }

    vector <int> :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        d[*it]++;
    }
    for(int i = 0; i < 1001; i++){
        if(d[i] > 0 && i % 2 == 1) 
        cout << i << " ";
    }
}