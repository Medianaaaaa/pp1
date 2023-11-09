#include <iostream>
using namespace std;
int s = 0;
int sumofdigits(string n, int t){
    s += n[t - 1] - '0';
    n = n.erase(t - 1, 1);
    if(t != 1) 
    return sumofdigits(n, t - 1);
    return s;

}
int main(){
    string n;
    cin >> n;
    int t = n.size();
    cout << sumofdigits(n, t);
}