#include <iostream>
#include <cmath>
#include <map>
#include <vector>

using namespace std;
int main(){
    char a;
    string s; getline(cin, s);
    int n,x=0; cin >> n;
    vector<char> v;
    map<char, int> m;
    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
        }
    for(int i=0; i<n; i++){
        x=0;
        for(int j=0; j<s.size(); j++){
            if(s[j]==v[i]) x++;
        }
        m.insert(make_pair(v[i], x));
    }
    map<char, int>:: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " - " << (*it).second << endl;
    }
    return 0;
}