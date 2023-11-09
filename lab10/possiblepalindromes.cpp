#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(vector<int> v){
	for(int i = 0; i < v.size() / 2; i++){
		if(v[i] != v[v.size() - 1 - i]){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	vector <int> vt(n);
	for(int i = 0; i < n; i++){
		cin >> vt[i];
	}
	sort(vt.begin(), vt.end());
	do{
		if(isPalindrome(vt)){
		for(int i = 0; i < vt.size(); i++){
			cout << vt[i] << " ";
		}
		return 0;
	}
}
while(next_permutation(vt.begin(), vt.end()));
cout << "Impossible" << endl;
}