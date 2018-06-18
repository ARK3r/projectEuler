#include <bits/stdc++.h>

using namespace std;

int findLCM(int a, int b)
{
    int res = 1;
    int min = (a < b ? a : b);
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
            res = i;
    }
    return res;
}

int main()
{
    int num = 1;
    for (int i = 20; i > 1; i--)
    {
        if (num % i != 0)
        {
            num *= (i / findLCM(num, i));
        }
    }
    cout << num << endl;
    return 0;
}