#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i];
        if (s[i].find("@gmail.com") != -1){
            for (int j = 0; j < s[i].size() - 10; j++){
                cout << s[i][j];
            }
            cout << endl;
        }
    }
}