#include <bits/stdc++.h>

using namespace std;


int main()
{
	int a = 0, b = 1, c = 1;
	long int sum = 0;
	while (b <= 4000000)
	{
		c = b + a;
		a = b;
		b = c;
		if (b % 2 == 0)
			sum += b;
	}
	cout << sum << endl;
	return 0;
}
