#include <iostream>
#include <map>

using namespace std;

int n, a, b;
map <int, map <int, int>> m;

int main (){
    cin >> n;
    for (int i = 1; i<= n; i++){
        cin >> a >> b;
        if (a > b)
        swap (a, b)
        cout << m[a][b] << endl;
        m[a][b]++;
    }
}