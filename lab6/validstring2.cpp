#include <iostream>
using namespace std;

bool isValid(string s, int n){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            cnt++;
        }
        else if(!isdigit(s[i])){
            cnt = 0;
        } 
        if(cnt >= n){
        return true;
        }
    }
    return false;
}

int main(){
    string s;
    int n;
    cin >> s >> n;

    if(isValid(s,n)){
        cout <<"Valid" <<endl;
    }
    else {
        cout <<"Not valid"<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

bool Validate(string str, int a){
    int cnt = 0; 
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= '0' and str[i] <= '9') 
        cnt++;
        else 
        cnt = 0;
        if(cnt == a)
        return true;
    }
    return false;
}

int main(){
    string s; 
    cin >> s;
    int n; 
    cin >> n;
    cout << (Validate(s, n) ? "Valid" : "Not valid");
}