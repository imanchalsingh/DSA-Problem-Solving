#include <iostream>
using namespace std;

int main()
{
    // Using long long to handle large numbers.
    long long n = 600851475143;
    long long largestPrimeFactor = 0;

    for (long long i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            largestPrimeFactor = i;
            n /= i;
        }
    }
    if (n > 1)
    {
        largestPrimeFactor = n;
    }

    cout << "The largest prime factor is: " << largestPrimeFactor << endl;
    return 0;
}
