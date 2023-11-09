#include <iostream>
#include <set>
#include <map>
#include <vector>

using namespace std;

int main(){
    set <string> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        if(s.count(a) == 0) {
            s.insert(a);
            cout << "new user added"<<endl;
        }
        else {
            cout << "user already exists" << endl;
        }
    }
}