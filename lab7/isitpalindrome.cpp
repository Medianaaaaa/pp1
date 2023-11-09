#include <iostream>
using namespace std;

string palindrome(string s, int index)
{
	if(index == s.size()) 
    return "Yes";
	else
	{
		if(s[index] != s[s.size() - index - 1]) 
        return "No";
		else 
        return palindrome(s, index + 1);
	}
}

int main()
{
	string s;
	cin >> s;
	cout << palindrome(s, 0);
}