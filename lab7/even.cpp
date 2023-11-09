#include <iostream>
using namespace std;
int a = 0;
int counteven(string s, int t){
    if((s[t - 1] - '0') % 2 ==0) 
    a = a + 1;
    if(t != 1) 
    counteven(s, t - 1);
    return a;
}
int main(){
    string s;
    cin >> s;
    int t = s.length();
    cout << counteven(s, t);
}