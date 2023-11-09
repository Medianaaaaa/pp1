#include <iostream>
#include <set>
#include <map>
#include <vector>

using namespace std;

int main(){
    map <string, int> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        int b;
        cin >> b;
        if(m.count(a) != 0){
            m[a] += b;}
        else 
        m[a]=b;
    }
    map <string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
}