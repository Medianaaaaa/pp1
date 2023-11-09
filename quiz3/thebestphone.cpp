#include <iostream>
#include <map>
using namespace std;
int main(){
    string s;
    double p,q,x;
    int n; cin >> n;
    map<double, string> m;

    for(int i=0; i<n; i++){
        cin >> s >> p >> q;
        x = p / q;
        m.insert(make_pair((x), s));
    }

    cout << (*m.begin()).second;

}