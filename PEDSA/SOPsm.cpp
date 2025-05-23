#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    long long sum = 0;
    for (int i = 2; i < 2000000; ++i)
    {
        if (isPrime(i))
            sum += i;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
// Output: Sum = 142913828922