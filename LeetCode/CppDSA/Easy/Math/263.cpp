#include <iostream>
using namespace std;

bool isUgly(int n)
{
    if (n <= 0)
        return false;

    int primes[3] = {2, 3, 5};
    for (int i = 0; i < 3; i++)
    {
        while (n % primes[i] == 0)
        {
            n /= primes[i];
        }
    }

    return n == 1;
}

int main()
{
    cout << isUgly(6) << endl;
    return 0;
}