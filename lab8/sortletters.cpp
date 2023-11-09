#include <iostream>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	string s1;
	cin >> s1;
	set <char> s;
	for(int i = 0; i < s1.size(); i++){
		if(s1[i] >= 'A' and s1[i] <= 'Z') 
        s.insert(char(s1[i] - 'A' + 'a'));
		else s.insert(s1[i]);
	}
	cout << s.size() << endl;
	set <char> :: iterator it;
	for(it = s.begin(); it != s.end(); it++){
		cout << (*it) << " ";
	}
	return 0;
}