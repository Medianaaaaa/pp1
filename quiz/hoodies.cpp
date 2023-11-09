#include <iostream> 
using namespace std; 
 
int main(){ 
    int x, y, a, b; 
    cin >> x >> y >> a >> b; 
    if(x + y < a + b){
        cout << "No";
        }
    else{
        cout << "Yes";
    }
    return 0;
}
