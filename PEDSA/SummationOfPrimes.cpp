#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int limit = 2000000;
    vector<bool> isPrime(limit, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < limit; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < limit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    long long sum = 0;
    for (int i = 2; i < limit; ++i)
    {
        if (isPrime[i])
        {
            sum += i;
        }
    }

    cout << "Sum of all primes below 2 million: " << sum << endl;
    return 0;
}
