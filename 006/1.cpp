#include <bits/stdc++.h>


using namespace std;

int main()
{
    int n = 100;
    long long int sumS = (n) * (n + 1) * (2 * n + 1) / 6;
    long long int squareS = pow((n) * (n+1) / 2, 2);
    cout << squareS - sumS << endl;
    return 0;
}