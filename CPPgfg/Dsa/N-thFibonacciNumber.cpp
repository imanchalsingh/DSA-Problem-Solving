#include <iostream>
using namespace std;

int fibonacciNumber(int n)
{
    if (n == 1 || n == 2)
        return 1;

    long long a = 1, b = 1, mod = 1e9 + 7;
    for (int i = 3; i <= n; ++i)
    {
        long long temp = (a + b) % mod;
        a = b;
        b = temp;
    }
    return b;
}