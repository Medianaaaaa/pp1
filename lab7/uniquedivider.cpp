#include <iostream>
using namespace std;
bool isdegree(long int a)
{
    if(a == 1) 
    return true;
    if(a % 2 != 0) 
    return false;
    a /= 2;
    if(a != 0) 
    isdegree(a);
}
int main(){
    long int a;
    cin >> a;
    if(isdegree(a)) 
    cout << "Yes";
    else 
    cout << "No";
}