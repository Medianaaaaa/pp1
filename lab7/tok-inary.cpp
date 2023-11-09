#include <iostream>
#include <algorithm>
using namespace std; 

string kth(int k, int n, string s)
{
    if(n <= 0) 
    return s;
    int y = n % k;
    n = n / k;
    if(y > 9) {
        char x = 55 + y;
        s += x;
        return kth(k, n, s);
    }
    else 
    {
        s = s + char(y + '0');
        return kth(k, n, s);
    }
}

int main() {
    int n, k, y;
    cin >> n >> k;
    string s = "";
    s = kth(k, n, "");
    reverse(s.begin(), s.end());
    cout << s;
}