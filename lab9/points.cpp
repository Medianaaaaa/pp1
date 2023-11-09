#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    vector <pair <int, int>> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        pair <int, int> p(a,b);
        s.push_back(p);
    }
    sort(s.begin(), s.end());
    vector <pair <int, int>> :: iterator it;
    for(it = s.begin(); it != s.end(); it++){
        cout << it -> first << " " << it -> second << endl;
    }

}