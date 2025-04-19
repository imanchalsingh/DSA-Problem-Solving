#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int n = 20;
    long long result = 1;

    for (int i = 2; i <= n; i++)
    {
        result = lcm(result, i);
    }

    cout << "Smallest multiple divisible by 1 to " << n << " is: " << result << endl;
    return 0;
}
