#include <bits/stdc++.h>

using namespace std;

int findSum(int n)
{
	int high = 1000 - (1000 % n);
	if (1000 % n == 0)
		high -= n;
	int nums = ((high - n) / n + 1);
	int sum = (nums) * (high + n) / 2;
	return sum;
}

int main()
{
	cout << findSum(3) + findSum(5) - findSum(15) << endl;
	return 0;
}
