#include <iostream>
using namespace std;

int inf(int prev)
{
	int cur;
	cin >> cur;
	if(cur == 0) 
    return prev;
	else 
    return inf(cur) + prev;


}

int main()
{
	cout << inf(0);
}