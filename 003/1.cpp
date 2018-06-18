#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long int n)
{
	for (long long int i = 2; i <= sqrt(n) + 2; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	long long int num = 600851475143;
	long long int largest = 1;
	for (long long int i = 1; i < sqrt(num) + 100; i++)
	{
		if (num % i == 0)
		{
			
			long long int newLarge = (i > (num / i) ? i : (num / i));
			newLarge = i;
			cout << newLarge << endl;
			if ( newLarge > largest && isPrime(newLarge))
				largest = newLarge;
		}
	}
	cout << largest << endl;
	return 0;
}
