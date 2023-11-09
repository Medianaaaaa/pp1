#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    float a, b, i = 0;
    cin >>a >>b;
    float k = b/a;
    while(true){
        if(k > pow(2, i) && i >= 0){
            i++;
            if(k == pow(2, i)){
                cout<<"YES " << i;
                return 0;
            }
            else if(pow(2, i) > k){
                cout<<"NO";
                return 0;
            }
        }
        else if(k < pow(2, i) && i <= 0){
            i--;
            if(k == pow(2, i)){
                cout<<"YES " << i;
                return 0;
            }
            else if(pow(2, i) < k){
                cout<<"NO";
                return 0;
            }
        }
        else{
            cout<<"YES " << 0;
            return 0;
        }
    }
}