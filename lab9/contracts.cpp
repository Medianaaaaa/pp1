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
    map <string, int> m;
    string d[n];
    for(int i = 0; i < n; i++){
        cin >> d[i];
        m[d[i]]++;
    }
    int cnt = 0;
    map <string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if((*it).second == 3){
            cnt++;
        }
    }
    cout << cnt;
}