#include <bits/stdc++.h>

using namespace std;


bool isPal(long long int n)
{
	string s = to_string(n);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != s[s.length() - 1 - i])
			return false;
	}
	return true;
}


int main()
{
	long long int largest = 1;
	for (int i = 999; i >= 100; i--)
	{
		for (int j = 999; j >= i; j--)
		{
			long long int num = i * j;
			if (num > largest)
			{
				if (isPal(num))
					largest = num;
			}
		}
	}
	cout << largest << endl;
	return 0;
}
