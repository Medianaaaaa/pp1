#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, a;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        int a; 
        cin >> a; 
        v.push_back(a);
        }
    cin >> a;
    sort(v.begin(), v.end());

    vector <int> :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        if(*it == a) {
            cout << "Yes"; 
        return 0;
        }
    }
    cout << "No";
    return 0; 
}