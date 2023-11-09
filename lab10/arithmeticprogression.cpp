#include <bits/stdc++.h>
using namespace std;
int sum (int n){
	int summ = 0;
	for(int i = 0; i <= n; i++){
		summ += i;
	}
	return summ;
}
int main(){
	int n;
	cin >> n;
	vector <int> vt(sum(n));
	for(int i = 0; i <= n; i++){
	    fill(vt.begin() + sum(i - 1), vt.begin() + sum(i), i);
	}
		for(int i=0;i<vt.size();i++){
			cout<<vt[i]<<" ";
		}
}