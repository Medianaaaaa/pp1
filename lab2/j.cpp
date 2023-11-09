#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int count = 0;
    int answer = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        count = 0;
        while (x != 0){
            int a = x % 10;
            if (a == 0)
            count ++;
            x /= 10;
        }
        answer += count;       
    }
    cout << answer << endl;
    return 0;
}