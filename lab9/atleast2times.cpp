#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    int n;
    cin >> n;
    vector <int> v;
    map <int, int> m;
    int d[n];
    for(int i = 0; i < n; i++){
        cin >> d[i];
    }
    for(int i = 0; i < n; i++){
        m[d[i]]++;
    }
    int cnt=0;
    map <int, int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if((*it).second > 1){
            cnt++;
        }
    }
    cout << cnt;
}