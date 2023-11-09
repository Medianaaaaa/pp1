#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;
int main(){
    map <string, int> m;
    int n;
    cin >> n;
    int t = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        t++;
        pair <string, int> p{s, t};
        m.insert(p);
    }
    map <string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
}