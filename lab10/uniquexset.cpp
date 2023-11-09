#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int m;
	cin >> m;
	vector <int> vt1(n);
	vector <int> vt2(m);
	for(int i = 0; i < n; i++){
		cin >> vt1[i];
	}
	vt1.erase(unique(vt1.begin(), vt1.end()), vt1.end());
	for(int i = 0; i < m; i++){
		cin >> vt2[i];
	}
		vt2.erase(unique(vt2.begin(), vt2.end()), vt2.end());
	 vector <int>  vt;
    for(int i = 0 , k = 0; i < vt1.size() || k < vt2.size();){
        if ( i < vt1.size()){
            vt.push_back(vt1[i]);
            i++;
        }
        if( k < vt2.size()){
            vt.push_back(vt2[k]);
            k++;
        }
    }
    vt.erase(unique(vt.begin(), vt.end()), vt.end());
    for(int i = 0; i < vt.size(); i++){
    	cout << vt[i] << " ";
	}
}