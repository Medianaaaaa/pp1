#include <iostream>
using namespace std;

void printNumber(int n, int i)
{
	if(i == n) 
	{
		cout << i << " ";
	}
	else 
	{
		cout << i << " ";
		printNumber(n, i + 1);
	}
}
int main()
{
	int s;
	cin >> s;
	printNumber(s, 1);
}
