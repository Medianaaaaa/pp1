#include <iostream>
using namespace std;

 int sumOfDigits(int n, int sum){

        while(n !=0){
            sum += n%10;
            n/=10;
        }
    return sum;
    }

int main(){

    int n;
    cin >> n;
    int arr[n];

    int sum = 0;

    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }

    for(int i = 0;i<n;i++){
        if (sumOfDigits(arr[i],sum)%2 == 0){
            cout << "Sum of digits is even!" << endl;
        }
        else{
            cout << "Sum of digits is odd!" << endl;
        }
    }
    return 0;
}